#include "pch.h"
#include <iostream>
#include <math.h>
#include "parser.h"
#include <vcclr.h>
#include <string> 
#include <sstream>
#include <thread>
#include <chrono>
#include <time.h>
#pragma once



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;





	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:

	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;







	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;



	protected:







	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(33, 24);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->groupBox1->Size = System::Drawing::Size(705, 176);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Äàííûå";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(476, 97);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 19;
			this->label4->Text = L"òóò áóäåò îòâåò";
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(528, 141);
			this->button2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(86, 35);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Ïðîâåñòè ñåêóùèå ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::Button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(476, 69);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(33, 13);
			this->label3->TabIndex = 17;
			this->label3->Text = L"eps =";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(514, 65);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(76, 20);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"0,0001";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(476, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(27, 13);
			this->label2->TabIndex = 15;
			this->label2->Text = L"x1 =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(476, 24);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 14;
			this->label1->Text = L"x0 =";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(514, 42);
			this->textBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(76, 20);
			this->textBox2->TabIndex = 13;
			this->textBox2->Text = L"1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(514, 20);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(76, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"0";
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Location = System::Drawing::Point(619, 141);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(86, 35);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Íà÷åðòèòü";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::Button1_Click);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(16, 126);
			this->radioButton3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(162, 28);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0.1*sin(x)+x^3-1";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(16, 69);
			this->radioButton2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(290, 28);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"x^4-26*x^3+131*x^2-226*x+120";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(16, 20);
			this->radioButton1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(147, 28);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1*x^2-x ln(x)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form1::RadioButton1_CheckedChanged);
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Solid;
			this->chart1->CausesValidation = false;
			chartArea1->BorderWidth = 6;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(33, 229);
			this->chart1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Bright;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(705, 405);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::Chart1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(794, 717);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Form1";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		//	0.1*pow(x,2)-x log(x)=0;
			//pow(x,4)"-26*pow(x,3)+131*pow(x,2)-226*x+120;
			//0.1*sin(x)+pow(x,3)-1;
	private: double f1(double x) {
		return 0.1 * pow(x, 2) - x * log(x);
	}
	private: double f2(double x) {
		return pow(x, 4) - 26 * pow(x, 3) + 131 * pow(x, 2) - 226 * x + 120;
	}
	private: double f3(double x) {
		return 0.1 * sin(x) + pow(x, 3) - 1;
	}
	private: System::Void RadioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RadioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Chart1_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = true;
		chart1->Series[0]->Points->Clear();
		chart1->Series->Clear();

		double x0 = Convert::ToDouble(textBox1->Text);
		double x1 = Convert::ToDouble(textBox2->Text);
		double epselon = Convert::ToDouble(textBox3->Text);
		if (radioButton1->Checked) {
			String^ Name = "0";
			chart1->Series->Add(Name);
			chart1->Series[Name]->LegendText = "0.1*pow(x,2)-x log(x)";
			chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			for (int x = x0 ; x <= x1 ; x++) {
				chart1->Series[0]->Points->AddXY(x, f1(x));
			}
			//int* p1(double);	
			//MetodSekushey(x0, x1, epselon, f1);


		}
		if (radioButton2->Checked) {
			String^ Name = "0";
			chart1->Series->Add(Name);
			chart1->Series[Name]->LegendText = "pow(x,4) - 26 * pow(x, 3) + 131 * pow(x, 2) - 226 * x + 120";
			chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			for (int x = x0 ; x <= x1 ; x++) {
				chart1->Series[0]->Points->AddXY(x, f2(x));
			}


		}
		if (radioButton3->Checked) {
			String^ Name = "0";
			chart1->Series->Add(Name);
			chart1->Series[Name]->LegendText = "0.1*sin(x)+pow(x,3)-1";
			chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			for (int x = x0 ; x <= x1 ; x++) {
				chart1->Series[0]->Points->AddXY(x, f3(x));
			}


		}
		/*String^ name = "gay";
		chart1->Series->Add(name);
		chart1->Series[name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
	*/
	}

			 /*private: void addSeries(int n, double x0, double x1, double (*fx)(double)) {
				 String^ Name = "";

				 Name = Convert::ToString(n);
				 chart1->Series->Add(Name);
				 chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				 chart1->Series[Name]->Points->AddXY(x0, fx(x0));
				 chart1->Series[Name]->Points->AddXY(x1, fx(x1));
			 }*/
	private:void MetodSekushey(double x0, double x1, double epselon, double (*fx)(double)) {
		int n = 1;
		while (fabs(x1 - x0) > epselon) { //Âûáðàí îñòàíîâ |x[n]-x[n+1]|<eps
			//addSeries(n, x0, x1, fx);
			String^ Name = "";
			Name = Convert::ToString(n);
			chart1->Series->Add(Name);
			chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			chart1->Series[Name]->Points->AddXY(x0, fx(x0));
			chart1->Series[Name]->Points->AddXY(x1, fx(x1));
			double tmp = x1;
			x1 = x1 - (x1 - x0) * fx(x1) / (fx(x1) - fx(x0));
			x0 = tmp;
			n++;

		}
	}





	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {

		double x0 = Convert::ToDouble(textBox1->Text);
		double x1 = Convert::ToDouble(textBox2->Text);
		double epselon = Convert::ToDouble(textBox3->Text);
		int n = 1;
		/*for (int i = 1; i <= n; i++) {
			String^ Name = "";
			Name = Convert::ToString(n);
			chart1->Series->RemoveAt(1);
		}*/
		if (radioButton1->Checked) {

			while (fabs(x1 - x0) > epselon) {
				String^ Name = "";
				Name = Convert::ToString(n);
				chart1->Series->Add(Name);
				chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				chart1->Series[Name]->Points->AddXY(x0, f1(x0));
				chart1->Series[Name]->Points->AddXY(x1, f1(x1));
				double tmp = x1;
				x1 = x1 - (x1 - x0) * f1(x1) / (f1(x1) - f1(x0));
				x0 = tmp;
				n++;
				this_thread::sleep_for(chrono::milliseconds(500));
				chart1->Refresh();
			}
		}
		if (radioButton2->Checked) {

			int n = 1;
			while (fabs(x1 - x0) > epselon) {
				String^ Name = "";
				Name = Convert::ToString(n);
				chart1->Series->Add(Name);
				chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				chart1->Series[Name]->Points->AddXY(x0, f2(x0));
				chart1->Series[Name]->Points->AddXY(x1, f2(x1));
				double tmp = x1;
				x1 = x1 - (x1 - x0) * f2(x1) / (f2(x1) - f2(x0));
				x0 = tmp;
				n++;
				this_thread::sleep_for(chrono::milliseconds(500));
				chart1->Refresh();
				
			}
		}
		if (radioButton3->Checked) {
			
			int n = 1;
			while (fabs(x1 - x0) > epselon) {
				
				String^ Name = "";
				Name = Convert::ToString(n);
				chart1->Series->Add(Name);
				chart1->Series[Name]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
				chart1->Series[Name]->Points->AddXY(x0, f3(x0));
				chart1->Series[Name]->Points->AddXY(x1 , f3(x1));
				double tmp = x1;
				x1 = x1 - (x1 - x0) * f3(x1) / (f3(x1) - f3(x0));
				x0 = tmp;
				n++;
				this_thread::sleep_for(chrono::milliseconds(500));
				chart1->Refresh();
			}

		}
		string result;
		std::ostringstream ost;
		ost << x1;
		result = ost.str();
		label4->Text = gcnew System::String(result.c_str());
		button2->Enabled = false;
	}
	};
}
