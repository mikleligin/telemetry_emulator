#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^ serialPort1;
	protected:
	private: System::Windows::Forms::ComboBox^ comboBox1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Timer^ timer1;





	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(12, 14);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(115, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 41);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Open";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(16, 105);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(111, 68);
			this->listBox1->TabIndex = 8;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea5->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart1->Legends->Add(legend5);
			this->chart1->Location = System::Drawing::Point(180, 14);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(563, 387);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 186);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(111, 22);
			this->textBox1->TabIndex = 10;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged_1);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(793, 58);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 48);
			this->button2->TabIndex = 11;
			this->button2->Text = L"Open file";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1022, 538);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
int time = 0;
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		array <String^>^ sp = serialPort1->GetPortNames();
		for each (String ^ portNames in sp)
		{
			comboBox1->Items->Add(portNames);
		}
		
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series->Clear();
		try
		{
			String^ com_name = comboBox1->Text;
			serialPort1->PortName = com_name;
			serialPort1->Open();
			timer1->Enabled = true;
			
		}
		catch(...)
		{
			MessageBox::Show(nullptr, "Com port is not exist", "Kuda ti lezesh", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
	}
	private:
	void add_elem_to_chart(String^ elem)
	{
		auto series = chart1->Series->Add(elem);
		series->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::FastLine;
		//textBox1->Text = chart1->Series->FindByName(elem)->ToString()->Length.ToString();
	}
	private:
		void draw_chart(String^ parse_str, int time)
		{
			array<String^>^ parse_arr = parse_str->Split(';');
			int count = parse_arr->Length;
			//StreamWriter^ file_to_write = gcnew StreamWriter("D:\\telemetry_scan\\telemetry_scan.txt", true);
			listBox1->Items->Clear();
			//DateTime data = DateTime::Now;
			//file_to_write->Write(data.ToString("dd/MM/yyyy | HHHH:mmmm:ssss;")+ "\n");
			for each (String ^ value in parse_arr)
			{
				array<String^>^ parse_value = value->Split('=');
				//PID:p=1,i=10,d=3,|SIN:sin1=0.98;sin2=1.98;sin3=-0.02
				//textBox1->Text = chart1->Series->FindByName(parse_value[0])->ToString();
				try
				{
					if ((chart1->Series->FindByName(parse_value[0]))->ToString()->Length == 0)
					{
						add_elem_to_chart(parse_value[0]);
					}
				}
				catch (...)
				{
					add_elem_to_chart(parse_value[0]);
				}

				//listBox1->Items->Add(parse_value[0] + "=" + parse_value[1]);

				//file_to_write->Write(parse_value[0] + "=" + parse_value[1] + "/");
				for (int i = 0; i < chart1->Series->Count; i++)
				{
					if (chart1->Series[i]->Name == parse_value[0])
					{
						chart1->Series[i]->Points->AddXY(time, parse_value[1]);
					}
				}
			}
		}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		String^ parse_str = serialPort1->ReadLine();
		draw_chart(parse_str, time);
		time += 1;
		
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	timer1->Enabled = false;
	StreamReader^ fl = gcnew StreamReader("D:\\telemetry_scan\\telemetry_scan.txt", true);
	int c = 0;
	int time_c = 0;
	textBox1->Text = c.ToString();
	String^ line = fl->ReadToEnd();
	array<String^>^ line_arr = line->Split(';');
	chart1->Series->Clear();
	for each (String^ liner in line_arr)
	{
		c++;
		//textBox1->Text = c.ToString();
		if (c%2==0)
		{
			array<String^>^ pre_last_split = liner->Split('/');
			/*for (size_t i = 1; i < pre_last_split->Length; i++)
			{*/
				//listBox1->Items->Add(pre_last_split[i]);
				for each (String ^ last in pre_last_split)
				{
					if (last != "")
					{
						array<String^>^ value = last->Split('=');
						if (value[0]->ToString() != "\n")
						{
							listBox1->Items->Add(value[1]);
						}

						if (chart1->Series->Count > 0)
						{
							try
							{

								add_elem_to_chart(value[0]);

							}
							catch (...)
							{
								listBox1->Text = " ";
							}
						}
						else
						{
							add_elem_to_chart(value[0]);
						}
						for (int i = 0; i < chart1->Series->Count; i++)
						{
							if (chart1->Series[i]->Name == value[0])
							{
								chart1->Series[i]->Points->AddXY(time_c, value[1]);
							}
						}
					}

				}
			
			time_c++;
		}
		
	}
	
	fl->Close();
	
}
};
}
