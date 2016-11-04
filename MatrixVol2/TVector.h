#pragma once
template<class Type>
class TVector{
private:
	int Size;
	int FirstIndex;
	Type *pVector;
public:
	TVector<Type>(int _Size=1,int _First=0){
		pVector = new Type [_Size];
		Size=_Size;
		FirstIndex=_First;
	for(int i=0;i<Size;i++)
	pVector[i]=0;
	}
	TVector<Type>(const TVector<Type> &tmp){
		pVector=new Type [tmp.Size];
		Size=tmp.Size;
		FirstIndex=tmp.FirstIndex;
		for(int i=0;i<Size;i++){
			pVector[i]=tmp.pVector[i];}}
	~TVector<Type>(){
		delete[]pVector;}
	void GetSize(int &k){
		 k=Size;
	}
	void GetFirstIndex(int &k){
		k=FirstIndex;}
	TVector<Type> & operator=(TVector<Type> tmp){
		if(Size!= tmp.Size){
			if(Size!=0){
				delete[]pVector;}
				pVector=new Type[tmp.Size];
				Size=tmp.Size;
				FirstIndex=tmp.FirstIndex;}
		for(int i=0;i<Size;i++){
			pVector[i]=tmp.pVector[i];}
	return *this;}

	Type &operator [](int index) const
	{
		Type res(0);
		if((index<0)||(index<FirstIndex)||(index>=FirstIndex+Size)){
			return res;}
		else{
			return pVector[index-FirstIndex];
		}
	}

	TVector<Type> operator +(TVector<Type> tmp){
		TVector<Type> res(*this);
		for(int i=0;i<Size;i++){
			res.pVector[i]=res.pVector[i]+tmp.pVector[i];}
		return res;}

	TVector<Type> operator -(TVector<Type> tmp){
		TVector res(*this);
		for(int i=0;i<Size;i++){
			res.pVector[i]=res.pVector[i]-tmp.pVector[i];}
		return res;}

	Type operator *(const TVector<Type> &tmp){
		Type res(0);
		if(Size==tmp.Size){
			for(int i=0;i<Size;i++){
				res=pVector[i]*tmp.pVector[i]+res;}}
		return res;}

	TVector<Type> operator *(int k){
		TVector<Type> res(*this);
		for(int i=0;i<Size;i++){
			res.pVector[i]=res.pVector[i]*k;}
		return res;}


};

