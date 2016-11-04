#pragma once
#include "TVector.h"
#include "TMatrix.h"
#include "GlobalO.h"

namespace MatrixVol2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::NumericUpDown^  Size;
	private: System::Windows::Forms::TextBox^  SizeText;
	private: System::Windows::Forms::DataGridView^  MatrixA;
	private: System::Windows::Forms::DataGridView^  MatrixB;
	private: System::Windows::Forms::Button^  SizeAccept;
	private: System::Windows::Forms::DataGridView^  Result;
	private: System::Windows::Forms::Button^  ProsAccept;
	private: System::Windows::Forms::TextBox^  Pros;

	protected: 

	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Size = (gcnew System::Windows::Forms::NumericUpDown());
			this->SizeText = (gcnew System::Windows::Forms::TextBox());
			this->MatrixA = (gcnew System::Windows::Forms::DataGridView());
			this->MatrixB = (gcnew System::Windows::Forms::DataGridView());
			this->SizeAccept = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::DataGridView());
			this->ProsAccept = (gcnew System::Windows::Forms::Button());
			this->Pros = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Size))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->MatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->MatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Result))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->����������������ToolStripMenuItem, 
				this->������������������ToolStripMenuItem, this->����������������ToolStripMenuItem, this->�����ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(580, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->����������������ToolStripMenuItem1, 
				this->������������������ToolStripMenuItem});
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(130, 20);
			this->����������������ToolStripMenuItem->Text = L"������ � ���������";
			// 
			// ����������������ToolStripMenuItem1
			// 
			this->����������������ToolStripMenuItem1->Name = L"����������������ToolStripMenuItem1";
			this->����������������ToolStripMenuItem1->Size = System::Drawing::Size(196, 22);
			this->����������������ToolStripMenuItem1->Text = L"��������� �������";
			this->����������������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem1_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(196, 22);
			this->������������������ToolStripMenuItem->Text = L"����������� �������";
			this->������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������������ToolStripMenuItem_Click);
			// 
			// ������������������ToolStripMenuItem
			// 
			this->������������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�������ToolStripMenuItem, 
				this->��������ToolStripMenuItem});
			this->������������������ToolStripMenuItem->Name = L"������������������ToolStripMenuItem";
			this->������������������ToolStripMenuItem->Size = System::Drawing::Size(143, 20);
			this->������������������ToolStripMenuItem->Text = L"������ �� ����������";
			this->������������������ToolStripMenuItem->Visible = false;
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->��������ToolStripMenuItem, 
				this->���������ToolStripMenuItem, this->���������ToolStripMenuItem, this->����������������ToolStripMenuItem});
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(132, 20);
			this->����������������ToolStripMenuItem->Text = L"������ � ���������";
			this->����������������ToolStripMenuItem->Visible = false;
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->���������ToolStripMenuItem->Text = L"���������";
			this->���������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(192, 22);
			this->����������������ToolStripMenuItem->Text = L"��������� �� �����";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������������ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
			// 
			// Size
			// 
			this->Size->Location = System::Drawing::Point(12, 50);
			this->Size->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {15, 0, 0, 0});
			this->Size->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Size->Name = L"Size";
			this->Size->ReadOnly = true;
			this->Size->Size = System::Drawing::Size(120, 20);
			this->Size->TabIndex = 1;
			this->Size->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->Size->Visible = false;
			this->Size->ValueChanged += gcnew System::EventHandler(this, &MyForm::Size_ValueChanged);
			// 
			// SizeText
			// 
			this->SizeText->Location = System::Drawing::Point(12, 27);
			this->SizeText->Name = L"SizeText";
			this->SizeText->Size = System::Drawing::Size(120, 20);
			this->SizeText->TabIndex = 2;
			this->SizeText->Text = L"������ ������";
			this->SizeText->Visible = false;
			// 
			// MatrixA
			// 
			this->MatrixA->AllowUserToAddRows = false;
			this->MatrixA->AllowUserToDeleteRows = false;
			this->MatrixA->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->MatrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MatrixA->Location = System::Drawing::Point(0, 76);
			this->MatrixA->Name = L"MatrixA";
			this->MatrixA->Size = System::Drawing::Size(157, 141);
			this->MatrixA->TabIndex = 3;
			this->MatrixA->Visible = false;
			// 
			// MatrixB
			// 
			this->MatrixB->AllowUserToAddRows = false;
			this->MatrixB->AllowUserToDeleteRows = false;
			this->MatrixB->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->MatrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->MatrixB->Location = System::Drawing::Point(174, 76);
			this->MatrixB->Name = L"MatrixB";
			this->MatrixB->Size = System::Drawing::Size(157, 141);
			this->MatrixB->TabIndex = 4;
			this->MatrixB->Visible = false;
			// 
			// SizeAccept
			// 
			this->SizeAccept->Location = System::Drawing::Point(138, 47);
			this->SizeAccept->Name = L"SizeAccept";
			this->SizeAccept->Size = System::Drawing::Size(75, 23);
			this->SizeAccept->TabIndex = 5;
			this->SizeAccept->Text = L"���������";
			this->SizeAccept->UseVisualStyleBackColor = true;
			this->SizeAccept->Visible = false;
			this->SizeAccept->Click += gcnew System::EventHandler(this, &MyForm::SizeAccept_Click);
			this->SizeAccept->MouseLeave += gcnew System::EventHandler(this, &MyForm::SizeAccept_MouseLeave);
			// 
			// Result
			// 
			this->Result->AllowUserToAddRows = false;
			this->Result->AllowUserToDeleteRows = false;
			this->Result->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->Result->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Result->Location = System::Drawing::Point(348, 76);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(157, 141);
			this->Result->TabIndex = 6;
			this->Result->Visible = false;
			// 
			// ProsAccept
			// 
			this->ProsAccept->Location = System::Drawing::Point(174, 180);
			this->ProsAccept->Name = L"ProsAccept";
			this->ProsAccept->Size = System::Drawing::Size(97, 37);
			this->ProsAccept->TabIndex = 7;
			this->ProsAccept->Text = L"��������";
			this->ProsAccept->UseVisualStyleBackColor = true;
			this->ProsAccept->Visible = false;
			this->ProsAccept->Click += gcnew System::EventHandler(this, &MyForm::ProsAccept_Click);
			// 
			// Pros
			// 
			this->Pros->Location = System::Drawing::Point(174, 113);
			this->Pros->Name = L"Pros";
			this->Pros->Size = System::Drawing::Size(157, 20);
			this->Pros->TabIndex = 8;
			this->Pros->Text = L"0";
			this->Pros->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->Pros->Visible = false;
			this->Pros->TextChanged += gcnew System::EventHandler(this, &MyForm::Pros_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(580, 261);
			this->Controls->Add(this->Pros);
			this->Controls->Add(this->ProsAccept);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->SizeAccept);
			this->Controls->Add(this->MatrixB);
			this->Controls->Add(this->MatrixA);
			this->Controls->Add(this->SizeText);
			this->Controls->Add(this->Size);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"������ � ��������� ������������ ����";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Size))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->MatrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->MatrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Result))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:void Messange()
				{
					String^ str="������� �������� ������";
					MessageBox::Show(str);
				}
	private: System::Void ����������������ToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 SizeText->Visible="True";
				 Size->Visible="True";
				 ������������������ToolStripMenuItem->Visible="True";
			 }
private: System::Void Size_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 SizeAccept->Visible="True";
		 }
private: System::Void SizeAccept_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 SizeM=Convert::ToInt32(Size->Value);
			 MatrixA->ColumnCount=SizeM;
			 MatrixA->RowCount=SizeM;
			 MatrixB->ColumnCount=SizeM;
			 MatrixB->RowCount=SizeM;
			 MatrixA->TopLeftHeaderCell->Value="������ �������";
					 for(int i=0;i<SizeM;i++)
					 {
						 MatrixA->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 MatrixA->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 if(j>=i)
							 MatrixA->Rows[i]->Cells[j]->Value=0;
							 else
							 MatrixA->Rows[i]->Cells[j]->ReadOnly="True";
		                 }
                     }

					 	 MatrixB->TopLeftHeaderCell->Value="������ �������";
					     for(int i=0;i<SizeM;i++)
					 {
						 MatrixB->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							  MatrixB->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							  if(j>=i)
							  MatrixB->Rows[i]->Cells[j]->Value=0;
							  else
							  MatrixB->Rows[i]->Cells[j]->ReadOnly="True";
		                 }
                     }
						 MatrixA->Visible="True";
						 MatrixB->Visible="True";
						 Size->Increment=0;
		 }
private: System::Void SizeAccept_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
		 {
			 if(MatrixA->Visible)
			 {
				 SizeAccept->Hide();
			 }
		 }
private: System::Void ������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 MatrixA->Hide();
			 MatrixB->Hide();
			 /*��� ���������� ����� ����� � ��������, ������������� �������� ReadOnly �� ���������*/
			 /*for(int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
					 MatrixA->Rows[i]->Cells[j]->ReadOnly="False";
					 MatrixB->Rows[i]->Cells[j]->ReadOnly="False";
				 }
			 }*/
			 MatrixA->ColumnCount=0;
			 MatrixA->RowCount=0;
			 MatrixB->ColumnCount=0;
			 MatrixB->RowCount=0;
			 Result->Hide();
			 Size->Increment=1;
			 System::Void Size_ValueChanged(System::Object^  sender, System::EventArgs^  e);
		 }
private: System::Void �������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 TMatrix<int> C(SizeM);
			 A=C;
			 B=C;
			 for(int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
					 try
					 {
					 MatrixA->Rows[i]->Cells[j]->ReadOnly="True";
					 MatrixB->Rows[i]->Cells[j]->ReadOnly="True";
					 A[i][j]=Convert::ToInt32(MatrixA->Rows[i]->Cells[j]->Value);
					 B[i][j]=Convert::ToInt32(MatrixB->Rows[i]->Cells[j]->Value);
					 }
					 catch(...)
					 {
						 Messange();
					 }
				 }
			 }
			 ����������������ToolStripMenuItem->Visible="True";
		 }
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Result->Hide();
			 TMatrix<int> C(0);
			 A=C;
			 B=C;
			 for(int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
					 MatrixA->Rows[i]->Cells[j]->ReadOnly="False";
					 MatrixB->Rows[i]->Cells[j]->ReadOnly="False";
				 }
			 }
			 MatrixA->ColumnCount=0;
			 MatrixA->RowCount=0;
			 MatrixB->ColumnCount=0;
			 MatrixB->RowCount=0;
			 MatrixA->ColumnCount=SizeM;
			 MatrixA->RowCount=SizeM;
			 MatrixB->ColumnCount=SizeM;
			 MatrixB->RowCount=SizeM;
			 MatrixA->TopLeftHeaderCell->Value="������ �������";
					 for(int i=0;i<SizeM;i++)
					 {
						 MatrixA->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 MatrixA->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 if(j>=i)
							 MatrixA->Rows[i]->Cells[j]->Value=0;
							 else
							 MatrixA->Rows[i]->Cells[j]->ReadOnly="True";
		                 }
                     }

					 	 MatrixB->TopLeftHeaderCell->Value="������ �������";
					     for(int i=0;i<SizeM;i++)
					 {
						 MatrixB->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							  MatrixB->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							  if(j>=i)
							  MatrixB->Rows[i]->Cells[j]->Value=0;
							  else
							  MatrixB->Rows[i]->Cells[j]->ReadOnly="True";
		                 }
                     }
			 
		 }
private: System::Void ��������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 TMatrix<int> C(SizeM);
			 C=A+B;
			 Result->Visible="True";
			 Result->RowCount=SizeM;
			 Result->ColumnCount=SizeM;
			 Result->TopLeftHeaderCell->Value="���������";
					 for(int i=0;i<SizeM;i++)
					 {
						 Result->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 Result->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 Result->Rows[i]->Cells[j]->ReadOnly="True";

		                 }
                     }
			 for( int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
						 Result->Rows[i]->Cells[j]->Value=Convert::ToInt32(C[i][j]);
				 }
			 }
		 }
private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 TMatrix<int> C(SizeM);
			 C=A-B;
			 Result->Visible="True";
			 Result->RowCount=SizeM;
			 Result->ColumnCount=SizeM;
			 Result->TopLeftHeaderCell->Value="���������";
					 for(int i=0;i<SizeM;i++)
					 {
						 Result->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 Result->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 Result->Rows[i]->Cells[j]->ReadOnly="True";

		                 }
                     }
			 for( int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
						 Result->Rows[i]->Cells[j]->Value=Convert::ToInt32(C[i][j]);
				 }
			 }
		 }
private: System::Void ���������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 TMatrix<int> C(SizeM);
			 C=A*B;
			 Result->Visible="True";
			 Result->RowCount=SizeM;
			 Result->ColumnCount=SizeM;
			 Result->TopLeftHeaderCell->Value="���������";
					 for(int i=0;i<SizeM;i++)
					 {
						 Result->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 Result->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 Result->Rows[i]->Cells[j]->ReadOnly="True";

		                 }
                     }
			 for( int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
						 Result->Rows[i]->Cells[j]->Value=Convert::ToInt32(C[i][j]);
				 }
			 }
		 }
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 MatrixB->Hide();
			 Pros->Visible="True";
		 }
private: System::Void Pros_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
			 ProsAccept->Visible="True";
		 }
private: System::Void ProsAccept_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Ch=Convert::ToInt32(Pros->Text);
			 TMatrix<int> C(SizeM);
			 C=A*Ch;
			 Pros->Hide();
			 ProsAccept->Hide();
			 MatrixB->Visible="True";
			 Result->Visible="True";
			 Result->RowCount=SizeM;
			 Result->ColumnCount=SizeM;
			 Result->TopLeftHeaderCell->Value="���������";
					 for(int i=0;i<SizeM;i++)
					 {
						 Result->Rows[i]->HeaderCell->Value=Convert::ToString(i+1);
						 for(int j=0;j<SizeM;j++)
						 {
							 Result->Columns[j]->HeaderCell->Value=Convert::ToString(j+1);
							 Result->Rows[i]->Cells[j]->ReadOnly="True";

		                 }
                     }
			 for( int i=0;i<SizeM;i++)
			 {
				 for(int j=i;j<SizeM;j++)
				 {
						 Result->Rows[i]->Cells[j]->Value=Convert::ToInt32(C[i][j]);
				 }
			 }

		 }
private: System::Void �����ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Application::Exit();
		 }
};
}
