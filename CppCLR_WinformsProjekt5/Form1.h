#pragma once
#include<cmath>
#include <iomanip>
namespace CppCLR_WinformsProjekt {

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
		float m, m1, m2w, m2s, delta, betaw, betas, m1nw,m1ns, m2nw, m2ns, p2p1w, p2p1s, rho2rho1w, rho2rho1s, t2t1w, t2t1s, p02p01w, p02p01s, h2h1w, h2h1s, gama;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvM1;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvDelta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvBetaw;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvM2w;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvP2P1w;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvT2T1w;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvρ2ρ1w;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvDelta1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvBetas;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvM2s;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvP2P1s;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvT2T1s;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dgvρ2ρ1s;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::NumericUpDown^  nudTo;

	private: System::Windows::Forms::NumericUpDown^  nudFrom;

	private: System::Windows::Forms::CheckBox^  chbRange;



	public:












	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  txtBetas;

	private: System::Windows::Forms::TextBox^  txtDelta;

	private: System::Windows::Forms::TextBox^  txtM1;
	private: System::Windows::Forms::TextBox^  txtBetaw;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtGamma;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnCalculate;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  txtT2T1w;

	private: System::Windows::Forms::TextBox^  txtM2nw;

	private: System::Windows::Forms::TextBox^  txtH2H1w;

	private: System::Windows::Forms::TextBox^  txtρ2ρ1w;


	private: System::Windows::Forms::TextBox^  txtM1nw;

	private: System::Windows::Forms::TextBox^  txtP02P01w;

	private: System::Windows::Forms::TextBox^  txtP2P1w;

	private: System::Windows::Forms::TextBox^  txtM2w;
	private: System::Windows::Forms::TextBox^  txtT2T1s;


	private: System::Windows::Forms::TextBox^  txtM2ns;

	private: System::Windows::Forms::TextBox^  txtH2H1s;

	private: System::Windows::Forms::TextBox^  txtρ2ρ1s;

	private: System::Windows::Forms::TextBox^  txtM1ns;

	private: System::Windows::Forms::TextBox^  txtP02P01s;


	private: System::Windows::Forms::TextBox^  txtP2P1s;

	private: System::Windows::Forms::TextBox^  txtM2s;

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->chbRange = (gcnew System::Windows::Forms::CheckBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->nudTo = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudFrom = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->txtBetas = (gcnew System::Windows::Forms::TextBox());
			this->txtDelta = (gcnew System::Windows::Forms::TextBox());
			this->txtM1 = (gcnew System::Windows::Forms::TextBox());
			this->txtBetaw = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtGamma = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->txtT2T1s = (gcnew System::Windows::Forms::TextBox());
			this->txtM2ns = (gcnew System::Windows::Forms::TextBox());
			this->txtH2H1s = (gcnew System::Windows::Forms::TextBox());
			this->txtρ2ρ1s = (gcnew System::Windows::Forms::TextBox());
			this->txtM1ns = (gcnew System::Windows::Forms::TextBox());
			this->txtP02P01s = (gcnew System::Windows::Forms::TextBox());
			this->txtP2P1s = (gcnew System::Windows::Forms::TextBox());
			this->txtM2s = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtT2T1w = (gcnew System::Windows::Forms::TextBox());
			this->txtM2nw = (gcnew System::Windows::Forms::TextBox());
			this->txtH2H1w = (gcnew System::Windows::Forms::TextBox());
			this->txtρ2ρ1w = (gcnew System::Windows::Forms::TextBox());
			this->txtM1nw = (gcnew System::Windows::Forms::TextBox());
			this->txtP02P01w = (gcnew System::Windows::Forms::TextBox());
			this->txtP2P1w = (gcnew System::Windows::Forms::TextBox());
			this->txtM2w = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dgvM1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvDelta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvBetaw = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvM2w = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvP2P1w = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvT2T1w = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvρ2ρ1w = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvDelta1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvBetas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvM2s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvP2P1s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvT2T1s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvρ2ρ1s = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFrom))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->chbRange);
			this->groupBox1->Controls->Add(this->label23);
			this->groupBox1->Controls->Add(this->label22);
			this->groupBox1->Controls->Add(this->nudTo);
			this->groupBox1->Controls->Add(this->nudFrom);
			this->groupBox1->Controls->Add(this->btnCalculate);
			this->groupBox1->Controls->Add(this->txtBetas);
			this->groupBox1->Controls->Add(this->txtDelta);
			this->groupBox1->Controls->Add(this->txtM1);
			this->groupBox1->Controls->Add(this->txtBetaw);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->txtGamma);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(-1, -1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1106, 336);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Oblique Shock Relations";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// chbRange
			// 
			this->chbRange->AutoSize = true;
			this->chbRange->Location = System::Drawing::Point(895, 63);
			this->chbRange->Name = L"chbRange";
			this->chbRange->Size = System::Drawing::Size(109, 24);
			this->chbRange->TabIndex = 18;
			this->chbRange->Text = L"Use Range";
			this->chbRange->UseVisualStyleBackColor = true;
			this->chbRange->CheckedChanged += gcnew System::EventHandler(this, &Form1::chbRange_CheckedChanged);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(799, 111);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(39, 20);
			this->label23->TabIndex = 16;
			this->label23->Text = L"To : ";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(657, 110);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 20);
			this->label22->TabIndex = 15;
			this->label22->Text = L"From : ";
			// 
			// nudTo
			// 
			this->nudTo->Location = System::Drawing::Point(839, 107);
			this->nudTo->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->nudTo->Name = L"nudTo";
			this->nudTo->Size = System::Drawing::Size(67, 26);
			this->nudTo->TabIndex = 14;
			this->nudTo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 131072 });
			// 
			// nudFrom
			// 
			this->nudFrom->Location = System::Drawing::Point(722, 107);
			this->nudFrom->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 90, 0, 0, 0 });
			this->nudFrom->Name = L"nudFrom";
			this->nudFrom->Size = System::Drawing::Size(58, 26);
			this->nudFrom->TabIndex = 13;
			// 
			// btnCalculate
			// 
			this->btnCalculate->Location = System::Drawing::Point(458, 107);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(129, 28);
			this->btnCalculate->TabIndex = 12;
			this->btnCalculate->Text = L"Calculate";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &Form1::btnCalculate_Click);
			// 
			// txtBetas
			// 
			this->txtBetas->Location = System::Drawing::Point(771, 152);
			this->txtBetas->Name = L"txtBetas";
			this->txtBetas->Size = System::Drawing::Size(212, 26);
			this->txtBetas->TabIndex = 11;
			// 
			// txtDelta
			// 
			this->txtDelta->Location = System::Drawing::Point(775, 62);
			this->txtDelta->Name = L"txtDelta";
			this->txtDelta->Size = System::Drawing::Size(100, 26);
			this->txtDelta->TabIndex = 10;
			this->txtDelta->Text = L"0.0";
			// 
			// txtM1
			// 
			this->txtM1->Location = System::Drawing::Point(494, 62);
			this->txtM1->Name = L"txtM1";
			this->txtM1->Size = System::Drawing::Size(100, 26);
			this->txtM1->TabIndex = 9;
			this->txtM1->Text = L"1.5";
			// 
			// txtBetaw
			// 
			this->txtBetaw->Location = System::Drawing::Point(186, 152);
			this->txtBetaw->Name = L"txtBetaw";
			this->txtBetaw->Size = System::Drawing::Size(224, 26);
			this->txtBetaw->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(622, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 20);
			this->label5->TabIndex = 7;
			this->label5->Text = L"INPUT : Delta (σ) =";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(387, 65);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"INPUT: M1 =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(635, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Beta (β, strong) =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(124, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Beta (β, weak) =";
			// 
			// txtGamma
			// 
			this->txtGamma->Location = System::Drawing::Point(566, 20);
			this->txtGamma->Name = L"txtGamma";
			this->txtGamma->Size = System::Drawing::Size(100, 26);
			this->txtGamma->TabIndex = 3;
			this->txtGamma->Text = L"1.4";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(454, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Gamma (γ) = ";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox3->Controls->Add(this->txtT2T1s);
			this->groupBox3->Controls->Add(this->txtM2ns);
			this->groupBox3->Controls->Add(this->txtH2H1s);
			this->groupBox3->Controls->Add(this->txtρ2ρ1s);
			this->groupBox3->Controls->Add(this->txtM1ns);
			this->groupBox3->Controls->Add(this->txtP02P01s);
			this->groupBox3->Controls->Add(this->txtP2P1s);
			this->groupBox3->Controls->Add(this->txtM2s);
			this->groupBox3->Controls->Add(this->label21);
			this->groupBox3->Controls->Add(this->label20);
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label18);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label14);
			this->groupBox3->Location = System::Drawing::Point(569, 193);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(537, 136);
			this->groupBox3->TabIndex = 1;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"....with strong beta";
			// 
			// txtT2T1s
			// 
			this->txtT2T1s->Location = System::Drawing::Point(428, 63);
			this->txtT2T1s->Name = L"txtT2T1s";
			this->txtT2T1s->Size = System::Drawing::Size(100, 26);
			this->txtT2T1s->TabIndex = 18;
			// 
			// txtM2ns
			// 
			this->txtM2ns->Location = System::Drawing::Point(428, 27);
			this->txtM2ns->Name = L"txtM2ns";
			this->txtM2ns->Size = System::Drawing::Size(100, 26);
			this->txtM2ns->TabIndex = 17;
			// 
			// txtH2H1s
			// 
			this->txtH2H1s->Location = System::Drawing::Point(260, 99);
			this->txtH2H1s->Name = L"txtH2H1s";
			this->txtH2H1s->Size = System::Drawing::Size(100, 26);
			this->txtH2H1s->TabIndex = 16;
			// 
			// txtρ2ρ1s
			// 
			this->txtρ2ρ1s->Location = System::Drawing::Point(260, 63);
			this->txtρ2ρ1s->Name = L"txtρ2ρ1s";
			this->txtρ2ρ1s->Size = System::Drawing::Size(100, 26);
			this->txtρ2ρ1s->TabIndex = 15;
			// 
			// txtM1ns
			// 
			this->txtM1ns->Location = System::Drawing::Point(260, 27);
			this->txtM1ns->Name = L"txtM1ns";
			this->txtM1ns->Size = System::Drawing::Size(100, 26);
			this->txtM1ns->TabIndex = 14;
			// 
			// txtP02P01s
			// 
			this->txtP02P01s->Location = System::Drawing::Point(88, 102);
			this->txtP02P01s->Name = L"txtP02P01s";
			this->txtP02P01s->Size = System::Drawing::Size(100, 26);
			this->txtP02P01s->TabIndex = 13;
			// 
			// txtP2P1s
			// 
			this->txtP2P1s->Location = System::Drawing::Point(88, 63);
			this->txtP2P1s->Name = L"txtP2P1s";
			this->txtP2P1s->Size = System::Drawing::Size(100, 26);
			this->txtP2P1s->TabIndex = 12;
			// 
			// txtM2s
			// 
			this->txtM2s->Location = System::Drawing::Point(88, 27);
			this->txtM2s->Name = L"txtM2s";
			this->txtM2s->Size = System::Drawing::Size(100, 26);
			this->txtM2s->TabIndex = 11;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(361, 63);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(62, 20);
			this->label21->TabIndex = 10;
			this->label21->Text = L"T2/T1 =";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(361, 27);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(53, 20);
			this->label20->TabIndex = 9;
			this->label20->Text = L"M2n =";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(191, 105);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(68, 20);
			this->label19->TabIndex = 8;
			this->label19->Text = L"H2/H1 =";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(191, 69);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(62, 20);
			this->label18->TabIndex = 6;
			this->label18->Text = L"ρ2/ρ1 =";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(189, 30);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(53, 20);
			this->label17->TabIndex = 4;
			this->label17->Text = L"M1n =";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(6, 105);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(82, 20);
			this->label16->TabIndex = 3;
			this->label16->Text = L"P02/P01 =";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(6, 69);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(64, 20);
			this->label15->TabIndex = 2;
			this->label15->Text = L"P2/P1 =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 30);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(44, 20);
			this->label14->TabIndex = 1;
			this->label14->Text = L"M2 =";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->groupBox2->Controls->Add(this->txtT2T1w);
			this->groupBox2->Controls->Add(this->txtM2nw);
			this->groupBox2->Controls->Add(this->txtH2H1w);
			this->groupBox2->Controls->Add(this->txtρ2ρ1w);
			this->groupBox2->Controls->Add(this->txtM1nw);
			this->groupBox2->Controls->Add(this->txtP02P01w);
			this->groupBox2->Controls->Add(this->txtP2P1w);
			this->groupBox2->Controls->Add(this->txtM2w);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label11);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(0, 193);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(549, 136);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"....with weak beta";
			// 
			// txtT2T1w
			// 
			this->txtT2T1w->Location = System::Drawing::Point(445, 66);
			this->txtT2T1w->Name = L"txtT2T1w";
			this->txtT2T1w->Size = System::Drawing::Size(100, 26);
			this->txtT2T1w->TabIndex = 15;
			// 
			// txtM2nw
			// 
			this->txtM2nw->Location = System::Drawing::Point(443, 27);
			this->txtM2nw->Name = L"txtM2nw";
			this->txtM2nw->Size = System::Drawing::Size(100, 26);
			this->txtM2nw->TabIndex = 14;
			// 
			// txtH2H1w
			// 
			this->txtH2H1w->Location = System::Drawing::Point(272, 99);
			this->txtH2H1w->Name = L"txtH2H1w";
			this->txtH2H1w->Size = System::Drawing::Size(100, 26);
			this->txtH2H1w->TabIndex = 13;
			// 
			// txtρ2ρ1w
			// 
			this->txtρ2ρ1w->Location = System::Drawing::Point(272, 66);
			this->txtρ2ρ1w->Name = L"txtρ2ρ1w";
			this->txtρ2ρ1w->Size = System::Drawing::Size(100, 26);
			this->txtρ2ρ1w->TabIndex = 12;
			// 
			// txtM1nw
			// 
			this->txtM1nw->Location = System::Drawing::Point(272, 27);
			this->txtM1nw->Name = L"txtM1nw";
			this->txtM1nw->Size = System::Drawing::Size(100, 26);
			this->txtM1nw->TabIndex = 11;
			// 
			// txtP02P01w
			// 
			this->txtP02P01w->Location = System::Drawing::Point(92, 102);
			this->txtP02P01w->Name = L"txtP02P01w";
			this->txtP02P01w->Size = System::Drawing::Size(100, 26);
			this->txtP02P01w->TabIndex = 10;
			// 
			// txtP2P1w
			// 
			this->txtP2P1w->Location = System::Drawing::Point(92, 66);
			this->txtP2P1w->Name = L"txtP2P1w";
			this->txtP2P1w->Size = System::Drawing::Size(100, 26);
			this->txtP2P1w->TabIndex = 9;
			// 
			// txtM2w
			// 
			this->txtM2w->Location = System::Drawing::Point(92, 27);
			this->txtM2w->Name = L"txtM2w";
			this->txtM2w->Size = System::Drawing::Size(100, 26);
			this->txtM2w->TabIndex = 8;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(198, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(68, 20);
			this->label13->TabIndex = 7;
			this->label13->Text = L"H2/H1 =";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(374, 69);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 20);
			this->label12->TabIndex = 6;
			this->label12->Text = L"T2/T1 =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(198, 69);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(62, 20);
			this->label11->TabIndex = 5;
			this->label11->Text = L"ρ2/ρ1 =";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(374, 36);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(53, 20);
			this->label10->TabIndex = 4;
			this->label10->Text = L"M2n =";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(198, 36);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(53, 20);
			this->label9->TabIndex = 3;
			this->label9->Text = L"M1n =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 105);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(82, 20);
			this->label8->TabIndex = 2;
			this->label8->Text = L"P02/P01 =";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 69);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(64, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"P2/P1 =";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 20);
			this->label6->TabIndex = 0;
			this->label6->Text = L"M2 =";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(13) {
				this->dgvM1,
					this->dgvDelta, this->dgvBetaw, this->dgvM2w, this->dgvP2P1w, this->dgvT2T1w, this->dgvρ2ρ1w, this->dgvDelta1, this->dgvBetas,
					this->dgvM2s, this->dgvP2P1s, this->dgvT2T1s, this->dgvρ2ρ1s
			});
			this->dataGridView1->Location = System::Drawing::Point(34, 352);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(1059, 310);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellContentClick);
			// 
			// dgvM1
			// 
			this->dgvM1->HeaderText = L"M1";
			this->dgvM1->Name = L"dgvM1";
			this->dgvM1->Width = 75;
			// 
			// dgvDelta
			// 
			this->dgvDelta->HeaderText = L"σ";
			this->dgvDelta->Name = L"dgvDelta";
			this->dgvDelta->Width = 75;
			// 
			// dgvBetaw
			// 
			this->dgvBetaw->HeaderText = L"βweak";
			this->dgvBetaw->Name = L"dgvBetaw";
			this->dgvBetaw->Width = 75;
			// 
			// dgvM2w
			// 
			this->dgvM2w->HeaderText = L"M2";
			this->dgvM2w->Name = L"dgvM2w";
			this->dgvM2w->Width = 75;
			// 
			// dgvP2P1w
			// 
			this->dgvP2P1w->HeaderText = L"P2/P1";
			this->dgvP2P1w->Name = L"dgvP2P1w";
			this->dgvP2P1w->Width = 75;
			// 
			// dgvT2T1w
			// 
			this->dgvT2T1w->HeaderText = L"T2/T1";
			this->dgvT2T1w->Name = L"dgvT2T1w";
			this->dgvT2T1w->Width = 75;
			// 
			// dgvρ2ρ1w
			// 
			this->dgvρ2ρ1w->HeaderText = L"ρ2/ρ1";
			this->dgvρ2ρ1w->Name = L"dgvρ2ρ1w";
			this->dgvρ2ρ1w->Width = 75;
			// 
			// dgvDelta1
			// 
			this->dgvDelta1->HeaderText = L"σ";
			this->dgvDelta1->Name = L"dgvDelta1";
			this->dgvDelta1->Width = 75;
			// 
			// dgvBetas
			// 
			this->dgvBetas->HeaderText = L"βstrong";
			this->dgvBetas->Name = L"dgvBetas";
			this->dgvBetas->Width = 75;
			// 
			// dgvM2s
			// 
			this->dgvM2s->HeaderText = L"M2";
			this->dgvM2s->Name = L"dgvM2s";
			this->dgvM2s->Width = 75;
			// 
			// dgvP2P1s
			// 
			this->dgvP2P1s->HeaderText = L"P2/P1";
			this->dgvP2P1s->Name = L"dgvP2P1s";
			this->dgvP2P1s->Width = 75;
			// 
			// dgvT2T1s
			// 
			this->dgvT2T1s->HeaderText = L"T2/T1";
			this->dgvT2T1s->Name = L"dgvT2T1s";
			this->dgvT2T1s->Width = 75;
			// 
			// dgvρ2ρ1s
			// 
			this->dgvρ2ρ1s->HeaderText = L"ρ2/ρ1";
			this->dgvρ2ρ1s->Name = L"dgvρ2ρ1s";
			this->dgvρ2ρ1s->Width = 75;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1105, 674);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Oblique Shock Relations";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudFrom))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCalculate_Click(System::Object^  sender, System::EventArgs^  e) {
		double t = (3.14159265359 / 180);
		
		m1 = System::Convert::ToDouble(txtM1->Text);
		gama = System::Convert::ToDouble(txtGamma->Text);


		if (chbRange->Checked) {
			txtDelta->Enabled = false;
			float from, to;
			from = System::Convert::ToDouble(nudFrom->Text);
			to = System::Convert::ToDouble(nudTo->Text);

			//for (int i = 0; i <= (System::Convert::ToInt32(nudTo->Text)- System::Convert::ToInt32(nudFrom->Text)); i++) {
			int i = System::Convert::ToInt32(nudFrom->Text);
			while(i <= System::Convert::ToInt32(nudTo->Text)){

				delta = from*t;
				mdb(gama, m1, delta);

				//m1nw = m1*sin(betaw - delta);
				m1nw = m1*sin(betaw);
				//m1ns = m1*sin(betas - delta);
				m1ns = m1*sin(betas);

				//m2nw = sqrt(((1 + ((gama - 1) / 2)*pow(m1nw, 2)) / ((gama*pow(m1nw, 2)) - ((gama - 1) / 2))));
				m2nw = m2(gama, m1nw);
				//m2ns = sqrt(((1 + ((gama - 1) / 2)*pow(m1ns, 2)) / ((gama*pow(m1ns, 2)) - ((gama - 1) / 2))));
				m2ns = m2(gama, m1ns);

				m2w = m2nw / (sin(betaw - delta));
				m2s = m2ns / (sin(betas - delta));

				p2p1w = 1.0 + 2.0*gama / (gama + 1.0)*(m1nw*m1nw - 1.0);
				p2p1s = 1.0 + 2.0*gama / (gama + 1.0)*(m1ns*m1ns - 1.0);

				//p02p01w = p2p1w*pow((1 / h2h1w), (gama / (gama - 1)));
				p02p01w = pp0(gama, m1nw) / pp0(gama, m2(gama, m1nw))*p2p1w;
				//p02p01s = p2p1s*pow((1 / h2h1s), (gama / (gama - 1)));
				p02p01s = pp0(gama, m1ns) / pp0(gama, m2(gama, m1ns))*p2p1s;

				//rho2rho1w = ((gama + 1)*pow(m1nw, 2)) / (2 + (gama - 1)*pow(m1nw, 2));
				rho2rho1w = rr0(gama, m2(gama, m1nw)) / rr0(gama, m1nw)*p02p01w;
				//rho2rho1s = ((gama + 1)*pow(m1ns, 2)) / (2 + (gama - 1)*pow(m1ns, 2));
				rho2rho1s = rr0(gama, m2(gama, m1ns)) / rr0(gama, m1ns)*p02p01s;

				//p2p1w = 1 + ((2 * gama) / (gama + 1))*(pow(m1nw, 2) - 1);
				//p2p1s = 1 + ((2 * gama) / (gama + 1))*(pow(m1ns, 2) - 1);

				/*t2t1w = (((1 + ((gama - 1) / 2)*(pow(m1, 2)*pow(sin(delta), 2)))*(((2 * gama) / (gama - 1))*
					(pow(m1, 2)*pow(sin(delta), 2)) - 1)) / ((pow((gama + 1), 2) / (2 * (gama - 1)))*(pow(m1, 2)*pow(sin(delta), 2))));*/
				t2t1w = tt0(gama, m2(gama, m1nw)) / tt0(gama, m1nw);
				if (isnan(t2t1w)) t2t1w = 1.0000;
				if (isinf(t2t1w)) t2t1w = 1.0000;
				/*t2t1s = (((1 + ((gama - 1) / 2)*(pow(m1, 2)*pow(sin(delta), 2)))*(((2 * gama) / (gama - 1))*
					(pow(m1, 2)*pow(sin(delta), 2)) - 1)) / ((pow((gama + 1), 2) / (2 * (gama - 1)))*(pow(m1, 2)*pow(sin(delta), 2))));*/
				t2t1s = tt0(gama, m2(gama, m1ns)) / tt0(gama, m1ns);
				if (isnan(t2t1s)) t2t1s = 1.0000;
				if (isinf(t2t1s)) t2t1s = 1.0000;
				h2h1w = p2p1w*(1 / rho2rho1w);
				h2h1s = p2p1s*(1 / rho2rho1s);

				dataGridView1->Rows->Add(txtM1->Text, from, betaw*(1/t), m2w, p2p1w, t2t1w,
			rho2rho1w, from, betas*(1/t), m2s, p2p1s, t2t1s, rho2rho1s);
				i=i+1;
				from  =System::Convert::ToDouble(i);
				
			}
		}
		else {
			txtDelta->Enabled = true;
			delta = System::Convert::ToDouble(txtDelta->Text)*t;

			mdb(gama, m1, delta);

			//m1nw = m1*sin(betaw - delta);
			m1nw = m1*sin(betaw);
			//m1ns = m1*sin(betas - delta);
			m1ns = m1*sin(betas);

			//m2nw = sqrt(((1 + ((gama - 1) / 2)*pow(m1nw, 2)) / ((gama*pow(m1nw, 2)) - ((gama - 1) / 2))));
			m2nw = m2(gama, m1nw);
			//m2ns = sqrt(((1 + ((gama - 1) / 2)*pow(m1ns, 2)) / ((gama*pow(m1ns, 2)) - ((gama - 1) / 2))));
			m2ns = m2(gama, m1ns);

			m2w = m2nw / (sin(betaw - delta));
			m2s = m2ns / (sin(betas - delta));

			p2p1w = 1.0 + 2.0*gama / (gama + 1.0)*(m1nw*m1nw - 1.0);
			p2p1s = 1.0 + 2.0*gama / (gama + 1.0)*(m1ns*m1ns - 1.0);

			//p02p01w = p2p1w*pow((1 / h2h1w), (gama / (gama - 1)));
			p02p01w = pp0(gama, m1nw) / pp0(gama, m2(gama, m1nw))*p2p1w;
			//p02p01s = p2p1s*pow((1 / h2h1s), (gama / (gama - 1)));
			p02p01s = pp0(gama, m1ns) / pp0(gama, m2(gama, m1ns))*p2p1s;

			//rho2rho1w = ((gama + 1)*pow(m1nw, 2)) / (2 + (gama - 1)*pow(m1nw, 2));
			rho2rho1w = rr0(gama, m2(gama, m1nw)) / rr0(gama, m1nw)*p02p01w;
			//rho2rho1s = ((gama + 1)*pow(m1ns, 2)) / (2 + (gama - 1)*pow(m1ns, 2));
			rho2rho1s = rr0(gama, m2(gama, m1ns)) / rr0(gama, m1ns)*p02p01s;

			//p2p1w = 1 + ((2 * gama) / (gama + 1))*(pow(m1nw, 2) - 1);
			//p2p1s = 1 + ((2 * gama) / (gama + 1))*(pow(m1ns, 2) - 1);

			/*t2t1w = (((1 + ((gama - 1) / 2)*(pow(m1, 2)*pow(sin(delta), 2)))*(((2 * gama) / (gama - 1))*
				(pow(m1, 2)*pow(sin(delta), 2)) - 1)) / ((pow((gama + 1), 2) / (2 * (gama - 1)))*(pow(m1, 2)*pow(sin(delta), 2))));*/
			t2t1w = tt0(gama, m2(gama, m1nw)) / tt0(gama, m1nw);
			if (isnan(t2t1w)) t2t1w = 1.0000;
			if (isinf(t2t1w)) t2t1w = 1.0000;
			/*t2t1s = (((1 + ((gama - 1) / 2)*(pow(m1, 2)*pow(sin(delta), 2)))*(((2 * gama) / (gama - 1))*
				(pow(m1, 2)*pow(sin(delta), 2)) - 1)) / ((pow((gama + 1), 2) / (2 * (gama - 1)))*(pow(m1, 2)*pow(sin(delta), 2))));*/
			t2t1s = tt0(gama, m2(gama, m1ns)) / tt0(gama, m1ns);
			if (isnan(t2t1s)) t2t1s = 1.0000;
			if (isinf(t2t1s)) t2t1s = 1.0000;
			h2h1w = p2p1w*(1 / rho2rho1w);
			h2h1s = p2p1s*(1 / rho2rho1s);

			


			dataGridView1->Rows->Add(txtM1->Text, txtDelta->Text, betaw*(1 / t), m2w, p2p1w, t2t1w,
				rho2rho1w, txtDelta->Text, betas*(1 / t), m2s, p2p1s, t2t1s, rho2rho1s);
		}

		
		txtBetas->Text = System::Convert::ToString(betas*(1/t));
		txtBetaw->Text = System::Convert::ToString(betaw*(1/t));

		txtM1nw->Text = System::Convert::ToString(m1nw);
		txtM1ns->Text = System::Convert::ToString(m1ns);
		txtM2nw->Text = System::Convert::ToString(m2nw);
		txtM2ns->Text = System::Convert::ToString(m2ns);
		txtM2w->Text = System::Convert::ToString(m2w);
		txtM2s->Text = System::Convert::ToString(m2s);
		txtρ2ρ1w->Text = System::Convert::ToString(rho2rho1w);
		txtρ2ρ1s->Text = System::Convert::ToString(rho2rho1s);
		txtP2P1w->Text = System::Convert::ToString(p2p1w);
		txtP2P1s->Text = System::Convert::ToString(p2p1s);
		txtT2T1w->Text = System::Convert::ToString(t2t1w);
		txtT2T1s->Text = System::Convert::ToString(t2t1s);
		txtH2H1w->Text = System::Convert::ToString(h2h1w);
		txtH2H1s->Text = System::Convert::ToString(h2h1s);
		txtP02P01w->Text = System::Convert::ToString(p02p01w);
		txtP02P01s->Text = System::Convert::ToString(p02p01s);
		
	}

	void mdb(double g, double m1, double d) {
		double p, q, r;
		p= -(m1*m1 + 2) / m1 / m1 - g*sin(d)*sin(d);
		q = (2 * m1*m1 + 1) / pow(m1, 4) + ((g + 1.)*(g + 1) / 4 + (g - 1) / m1 / m1)*sin(d)*sin(d);
		r = -cos(d)*cos(d) / pow(m1, 4);
		double a, b;
		a= (3 * q - p*p) / 3;
		b = (2 * p*p*p - 9 * p*q + 27 * r) / 27;
		double  test;
		test=// roundf(
			b*b / 4 + a*a*a / 27
		//)
			;
		double x1;
		double x2;
		double x3;
		double t1;
		double t2;
		if (test > 0.0) {//return -1.0
			betas = -1.0;
			betaw = -1.0;
		}
		else {
			if (test == 0.0) {
				x1 = sqrt(-a / 3);
				x2 = x1;
				x3 = 2 * x1;
				if (b > 0.0) {
					x1 *= -1;
					x2 *= -1;
					x3 *= -1;
				}
			}
			if (test < 0.0) {
				double phi;
				phi= acos(sqrt(-27 * b*b / 4 / a / a / a));
				x1 = 2 * sqrt(-a / 3)*cos(phi / 3);
				x2 = 2 * sqrt(-a / 3)*cos(phi / 3 + 3.14159265359 * 2 / 3);
				x3 = 2.*sqrt(-a / 3)*cos(phi / 3 + 3.14159265359 * 4 / 3);
				if (b > 0.0) {
					x1 *= -1;
					x2 *= -1;
					x3 *= -1;
				}
			}
			double s1;
			s1= x1 - p / 3;
			double s2;
			s2= x2 - p / 3;
			double s3;
			s3= x3 - p / 3;
			if (s1 < s2 && s1 < s3) {
				t1 = s2;
				t2 = s3;
			}
			else if (s2 < s1 && s2 < s3) {
				t1 = s1;
				t2 = s3;
			}
			else {
				t1 = s1;
				t2 = s2;
			}
			double b1;
			b1= asin(sqrt(t1));
			double b2;
			b2= asin(sqrt(t2));
			betas = b1;
			betaw = b2;
			if (b2 > b1) {
				betas = b2;
				betaw = b1;
			}
			//if(i==0) {return betaw}
			//if(i==1) {return betas}}
		}
	}

	double m2(double g, double m1) {
		return sqrt((1 + 0.5 * (g - 1.0) * m1 * m1) / (g * m1 * m1 - 0.5 * (g - 1.0)));
	}
	double tt0(double g, double m) {
		return pow((1.0 + (g - 1.0) / 2.0*m*m), -1.0);
	}
	double pp0(double g, double m) {
		return pow((1.0 + (g - 1.0) / 2.*m*m), -g / (g - 1.0));
	}
	double rr0(double g, double m) {
		return pow((1.0 + (g - 1.0) / 2.0*m*m), -1.0 / (g - 1.0));
	}


private: System::Void chbRange_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (chbRange->Checked) {
		txtDelta->Enabled = false;
	}
	else {
		txtDelta->Enabled = true;
	}
		
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
	txtM2w->Text = dataGridView1->Rows[e->RowIndex]->Cells[3]->Value->ToString();
	txtP2P1w->Text = dataGridView1->Rows[e->RowIndex]->Cells[4]->Value->ToString();
	txtT2T1w->Text = dataGridView1->Rows[e->RowIndex]->Cells[5]->Value->ToString();
	txtBetaw->Text= dataGridView1->Rows[e->RowIndex]->Cells[2]->Value->ToString();
	txtDelta->Text = dataGridView1->Rows[e->RowIndex]->Cells[1]->Value->ToString();
	txtρ2ρ1w ->Text = dataGridView1->Rows[e->RowIndex]->Cells[6]->Value->ToString();

	txtM2s->Text = dataGridView1->Rows[e->RowIndex]->Cells[9]->Value->ToString();
	txtP2P1s->Text = dataGridView1->Rows[e->RowIndex]->Cells[10]->Value->ToString();
	txtT2T1s->Text = dataGridView1->Rows[e->RowIndex]->Cells[11]->Value->ToString();
	txtBetas->Text = dataGridView1->Rows[e->RowIndex]->Cells[8]->Value->ToString();
	txtρ2ρ1s->Text = dataGridView1->Rows[e->RowIndex]->Cells[12]->Value->ToString();

	txtM1nw->Text = "";
	txtM1ns->Text = "";
	txtM2nw->Text = "";
	txtM2ns->Text = "";
	txtH2H1w->Text = "";
	txtH2H1s->Text = "";
	txtP02P01w->Text = "";
	txtP02P01s->Text = "";


}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
	txtBetas->Enabled=false;
	txtBetaw->Enabled = false;

	txtM1nw->Enabled = false;
	txtM1ns->Enabled = false;
	txtM2nw->Enabled = false;
	txtM2ns->Enabled = false;
	txtM2w->Enabled = false;
	txtM2s->Enabled = false;
	txtρ2ρ1w->Enabled = false;
	txtρ2ρ1s->Enabled = false;
	txtP2P1w->Enabled = false;
	txtP2P1s->Enabled = false;
	txtT2T1w->Enabled = false;
	txtT2T1s->Enabled = false;
	txtH2H1w->Enabled = false;
	txtH2H1s->Enabled = false;
	txtP02P01w->Enabled = false;
	txtP02P01s->Enabled = false;
}
};
}
