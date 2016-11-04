#pragma once
#include "TVector.h"
template<class MType>
class TMatrix
{
private:
	int SizeM;
	TVector <TVector<MType>> matr;
public:
	TMatrix<MType>(int Size=1)
	{
		SizeM=Size;
		matr=TVector<TVector<MType>>(SizeM);
		for(int i=0;i<SizeM;i++)
			matr[i]=TVector<MType>(SizeM-i,i);
		}
	
	TMatrix<MType>(const TMatrix<MType> &tmp)
	{
		SizeM=tmp.SizeM;
		matr=TVector<TVector<MType>>(SizeM);
		for(int i=0;i<SizeM;i++){
			matr[i]=tmp.matr[i];}}

	~TMatrix<MType>(){
	}

	TMatrix<MType> &operator =(TMatrix<MType> tmp){
		if(SizeM!=tmp.SizeM)
		{
			if(SizeM!=0)
			{

			}
			        SizeM=tmp.SizeM;
					matr=TVector<TVector<MType>>(SizeM);
					for(int i=0;i<tmp.SizeM;i++)
						matr[i]=TVector<MType>(SizeM-i,i);
		}
					
					for(int i=0;i<SizeM;i++){
						matr[i]=tmp.matr[i];}
					return *this;
	}
	TVector<MType> &operator [](int index) const
	{
		TVector<MType> res(0);
		if(index<0||index>SizeM)
		{
			return res;
		}
		else
		{
			return matr[index];
		}
	}
	
	TMatrix<MType> operator +(TMatrix<MType> tmp)
	{
		TMatrix<MType> res(0);
		if(SizeM==tmp.SizeM)
		{
			tmp.matr=matr+tmp.matr;
			res=tmp;
		}
		return res;
	}
	TMatrix<MType> operator -(TMatrix<MType> tmp)
	{
		TMatrix<MType> res(0);
		if(SizeM==tmp.SizeM)
		{
			tmp.matr=matr-tmp.matr;
			res=tmp;
		}
		return res;
	}
	TMatrix<MType> operator *(TMatrix<MType> tmp)
	{
		TMatrix<MType> res(0);
		if(SizeM==tmp.SizeM)
		{
			res=*this;
			for(int i=0;i<SizeM;i++)
			{
				for(int j=0;j<SizeM;j++)
				{
					res[i][j]=0;
					for(int k=0;k<SizeM;k++)
					{
						res[i][j]=res[i][j]+((*this)[i][k])*(tmp[k][j]);
					}
				}
			}
		}
		return res;
	}
	TMatrix<MType> operator *(int k)
	{
		TMatrix<MType> res=*this;
		for(int i=0;i<res.SizeM;i++)
		{
			res.matr[i]=res.matr[i]*k;
		}
		return res;
	}


};