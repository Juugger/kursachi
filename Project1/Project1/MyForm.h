#pragma once

#include <cliext/vector>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 45);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(304, 139);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Исходный текст";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(322, 29);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Обработанный текст";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(322, 45);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(291, 139);
			this->textBox2->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ключ";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(15, 213);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(301, 20);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(478, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Location = System::Drawing::Point(15, 242);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 100);
			this->panel1->TabIndex = 7;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(4, 27);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(101, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"Расшифровать";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(4, 4);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Зашифровать";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(625, 354);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		Int32 * key;
		int key_length = 0;


		//проверка ключа
		bool CheckKey()
		{
			
		/*	for (int i = 0; i < key_length; ++i)
			{
				if(key[i] > 0)
				MessageBox::Show(key[i].ToString());
			}	*/

			if (key_length < 2)
			{
				//MessageBox::Show(L"Длина ключа должна состоять хотябы из 2-х чисел");
				return false;
			}

			Int32 * key_check = new Int32[key_length];

			for (int i = 0; i < key_length; ++i)
			{
				key_check[i] = key[i];
			}

			int temp;

			for (int i = 0; i < key_length; ++i)
			{
				for (int j = key_length - 1; j > i; --j)
				{
					if (key_check[j - 1] > key_check[j])
					{
						temp = key_check[j - 1];
						key_check[j - 1] = key_check[j];
						key_check[j] = temp;
					}
				}
			}
			
			for (int i = 0; i < key_length - 1; ++i)
			{
				if (key_check[i] + 1 != key_check[i + 1])
				{
					return false;
				}
			}

			//MessageBox::Show(L"key_length: " + key_length.ToString() + "; max key: " + key_check[key_length - 1]);
			if (key_length != key_check[key_length - 1])
			{
				return false;
			}

			return true;
		}

		//получение и установка ключа
		Void SetKey(String^ str)
		{
			if (str->Length < 1)
			{
				MessageBox::Show(L"Введите ключ\nПример: \"2 1 4 3\"");
				return;
			}
			
			array<String^> ^strs = str->Split(L' ');
			
			Int32 *key_strs = new Int32[strs->Length];
			cliext::vector<Int32> str_list;
			
			key_length = 0;
			for (int i = 0; i < strs->Length; ++i)
			{
				if (strs[i] != String::Empty)
				{
					if (!Int32::TryParse(strs[i], key_strs[i]))
					{
						MessageBox::Show(L"Неверно введен ключ\n Пример: \"2 1 4 3\"");
						return;
					}
					str_list.push_back(key_strs[i]);
					++key_length;
					//MessageBox::Show(key[i].ToString());
				}
			}

			key = new Int32[key_length];
			for (int i = 0; i < key_length; ++i)
			{
				key[i] = str_list.at(i);
			}			
		}

		//функция шифрования
		String^ encrypt_str(String^ str)
		{
			for (int i = 0; i < str->Length % key_length; ++i)
			{
				str += L" ";
			}

			String ^ result = L"";

			for (int i = 0; i < str->Length; i += key_length)
			{
				array<wchar_t> ^str_char = str->ToCharArray();

				for (int j = 0; j < key_length; ++j)
				{
					str_char[key[j] - 1] = str[i + j];
				}

				for (int j = 0; j < key_length; ++j)
				{
					result += str_char[j];
				}
			}

			return result;
		}


		//функция расшифровки
		String^ decrypt_str(String^ str)
		{
			for (int i = 0; i < str->Length % key_length; ++i)
			{
				str += L" ";
			}

			String ^ result = L"";

			for (int i = 0; i < str->Length; i += key_length)
			{
				array<wchar_t> ^str_char = str->ToCharArray();

				for (int j = 0; j < key_length; ++j)
				{
					str_char[j] = str[i + key[j] - 1];
				}

				for (int j = 0; j < key_length; ++j)
				{
					result += str_char[j];
				}
			}
			return result;
		}

/*		String^ encrypt_str(String^ str)
		{
			
			Int32 rows = key_length;
			Int32 strings = (str->Length) / key_length;
			
			Int32 maxSimbols = rows * strings;

			Int32 countOfSimbols = (str->Length % key_length);
			
			MessageBox::Show(countOfSimbols.ToString());
			MessageBox::Show("strLength: " + str->Length + "; strings: " + strings + "; rows: " + rows + "; rows * strings: " + maxSimbols);

			for (int i = 0; i = countOfSimbols; ++i)
			{
				str += L" ";
			}

			if (countOfSimbols > 0)
			{
				++strings;
			}

			String^ newStr;

			MessageBox::Show("strLength: " + str->Length + "; strings: " + strings + "; rows: " + rows + "; rows * strings: " + (rows * strings));
			int current_pos = 0;
			for (int i = 0; i < strings; ++i)
			{
				for (int j = 0; j < rows; ++j)
				{
					//MessageBox::Show("index: " + (key[j] + current_pos));
					newStr += str[(key[j] - 1) + current_pos];
					
				}
				current_pos += key_length;
			}

			return newStr;
		}

		String^ decrypt_str(String^ str)
		{
			Int32 rows = key_length;
			Int32 strings = (str->Length) / key_length;
			Int32 countOfSimbols = (str->Length % key_length);

			for (int i = 0; i < countOfSimbols; ++i)
			{
				str += L" ";
			}

			if (countOfSimbols > 0)
			{
				++strings;
			}

			String ^newStr;

			array<wchar_t> ^str_char = str->ToCharArray();
		
			//MessageBox::Show("strLength: " + str->Length + "; strings: " + strings + "; rows: " + rows + "; rows * strings: " + (rows * strings));
			int current_pos = 0;
			for (int i = 0; i < strings; ++i)
			{
				
				wchar_t *temp = new wchar_t[key_length];
				for (int j = 0; j < rows; ++j)
				{
					//MessageBox::Show("index: " + (key[j] + current_pos));
					temp[key[j] - 1] = str_char[j + current_pos];
					
				}
				for (int j = 0; j < key_length; ++j)
				{
					//MessageBox::Show(temp[j].ToString());
					newStr += temp[j];
				}
				current_pos += key_length;
			}

			return newStr;
		}
*/
		private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			
			SetKey(textBox3->Text->ToString());

			
			if (!CheckKey())
			{
				MessageBox::Show(L"Неверно введен ключ!\n(ряд чисел разделенными пробелами должен состоять из натуральных чисел от 1 до любого положительного числа)\nПример: \"2 1 4 3\"");
				return;
			}

		if (radioButton1->Checked)
		{
			
			textBox2->Text = encrypt_str(textBox1->Text->ToString());
		}
		else
		{
			textBox2->Text = decrypt_str(textBox1->Text->ToString());
		}
	}

			
};
}
