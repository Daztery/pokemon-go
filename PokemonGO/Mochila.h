#pragma once
#include "ArrPokemon.h"
#include "CPokemon.h"
#include "FormParada.h"


namespace PokemonGO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Mochila
	/// </summary>
	public ref class Mochila : public System::Windows::Forms::Form
	{
	public:
		CPersonaje *personaje;//no se inicializa porque ya se inicializó en el form principal "Myform"
		CArrPokemon *personajepokemones;
		CPokemon *pokemon;
		Random r;
		
		CPokemon *pokemon1001 = new CPokemon(1001, 100, 110, 50, 0, 0);
		CPokemon *pokemon1002 = new CPokemon(1002, 100, 110, 50, 0, 0);
		CPokemon *pokemon1003 = new CPokemon(1003, 100, 110, 50, 0, 0);
		CPokemon *pokemon1004 = new CPokemon(1004, 100, 110, 50, 0, 0);
		CPokemon *pokemon1005 = new CPokemon(1005, 100, 110, 50, 0, 0);
		CPokemon *pokemon1006 = new CPokemon(1006, 100, 110, 50, 0, 0);
		CPokemon *pokemon1007 = new CPokemon(1007, 100, 110, 50, 0, 0);
		CPokemon *pokemon1008 = new CPokemon(1008, 100, 110, 50, 0, 0);
		CPokemon *pokemon1009 = new CPokemon(1009, 100, 110, 50, 0, 0);
		CPokemon *pokemon1010 = new CPokemon(1010, 100, 110, 50, 0, 0);
		CPokemon *pokemon1011 = new CPokemon(1011, 100, 110, 50, 0, 0);
		CPokemon *pokemon1012 = new CPokemon(1012, 100, 110, 50, 0, 0);
		CPokemon *pokemon1013 = new CPokemon(1013, 100, 110, 50, 0, 0);
		CPokemon *pokemon1014 = new CPokemon(1014, 100, 110, 50, 0, 0);
		CPokemon *pokemon1015 = new CPokemon(1015, 100, 110, 50, 0, 0);
		CPokemon *pokemon1016 = new CPokemon(1016, 100, 110, 50, 0, 0);
		CPokemon *pokemon1017 = new CPokemon(1017, 100, 110, 50, 0, 0);
		CPokemon *pokemon1018 = new CPokemon(1018, 100, 110, 50, 0, 0);
		CPokemon *pokemon1019 = new CPokemon(1019, 100, 110, 50, 0, 0);
		CPokemon *pokemon1020 = new CPokemon(1020, 100, 110, 50, 0, 0);
		CPokemon *pokemon1021 = new CPokemon(1021, 100, 110, 50, 0, 0);
		CPokemon *pokemon1022 = new CPokemon(1022, 100, 110, 50, 0, 0);
		CPokemon *pokemon1023 = new CPokemon(1023, 100, 110, 50, 0, 0);
		CPokemon *pokemon1024 = new CPokemon(1024, 100, 110, 50, 0, 0);





		bool click;
	private: System::Windows::Forms::Label^  lblAtaque;
	private: System::Windows::Forms::Label^  lblExperiencia;
	private: System::Windows::Forms::Label^  lblVida;
	private: System::Windows::Forms::PictureBox^  pbPokemon;
	private: System::Windows::Forms::Button^  btnTransferir;
	private: System::Windows::Forms::Button^  btnEvolucionar;
	private: System::Windows::Forms::Label^  lblCaramelos;


	private: System::Windows::Forms::Label^  lblHuevo;
	private: System::Windows::Forms::PictureBox^  pbHuevo;


	private: System::Windows::Forms::ListBox^  listPokemonAtrapados;
	public:
		Mochila(void)
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
		~Mochila()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  txtRevivir;
	private: System::Windows::Forms::Label^  txtPociones;
	private: System::Windows::Forms::PictureBox^  btnpokemon;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  btnitems;
	private: System::Windows::Forms::PictureBox^  cerrar;
	private: System::Windows::Forms::Panel^  lstPokemon;
	private: System::Windows::Forms::Panel^  lstItems;



	private: System::Windows::Forms::Label^  txtitem;
	private: System::Windows::Forms::Label^  txtnumpok;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::IContainer^  components;








	protected:

	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Mochila::typeid));
			this->btnpokemon = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->btnitems = (gcnew System::Windows::Forms::PictureBox());
			this->cerrar = (gcnew System::Windows::Forms::PictureBox());
			this->lstPokemon = (gcnew System::Windows::Forms::Panel());
			this->lblCaramelos = (gcnew System::Windows::Forms::Label());
			this->btnEvolucionar = (gcnew System::Windows::Forms::Button());
			this->btnTransferir = (gcnew System::Windows::Forms::Button());
			this->lblAtaque = (gcnew System::Windows::Forms::Label());
			this->lblExperiencia = (gcnew System::Windows::Forms::Label());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->pbPokemon = (gcnew System::Windows::Forms::PictureBox());
			this->listPokemonAtrapados = (gcnew System::Windows::Forms::ListBox());
			this->lstItems = (gcnew System::Windows::Forms::Panel());
			this->pbHuevo = (gcnew System::Windows::Forms::PictureBox());
			this->lblHuevo = (gcnew System::Windows::Forms::Label());
			this->txtRevivir = (gcnew System::Windows::Forms::Label());
			this->txtPociones = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->txtnumpok = (gcnew System::Windows::Forms::Label());
			this->txtitem = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnpokemon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnitems))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cerrar))->BeginInit();
			this->lstPokemon->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->BeginInit();
			this->lstItems->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuevo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// btnpokemon
			// 
			this->btnpokemon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnpokemon.Image")));
			this->btnpokemon->Location = System::Drawing::Point(49, 299);
			this->btnpokemon->Name = L"btnpokemon";
			this->btnpokemon->Size = System::Drawing::Size(62, 65);
			this->btnpokemon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->btnpokemon->TabIndex = 2;
			this->btnpokemon->TabStop = false;
			this->btnpokemon->Click += gcnew System::EventHandler(this, &Mochila::btnpokemon_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(154, 357);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(59, 59);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &Mochila::pictureBox3_Click);
			// 
			// btnitems
			// 
			this->btnitems->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnitems.Image")));
			this->btnitems->Location = System::Drawing::Point(247, 302);
			this->btnitems->Name = L"btnitems";
			this->btnitems->Size = System::Drawing::Size(68, 65);
			this->btnitems->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->btnitems->TabIndex = 4;
			this->btnitems->TabStop = false;
			this->btnitems->Click += gcnew System::EventHandler(this, &Mochila::btnitems_Click);
			// 
			// cerrar
			// 
			this->cerrar->BackColor = System::Drawing::Color::Transparent;
			this->cerrar->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->cerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cerrar.Image")));
			this->cerrar->Location = System::Drawing::Point(160, 365);
			this->cerrar->Name = L"cerrar";
			this->cerrar->Size = System::Drawing::Size(46, 44);
			this->cerrar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->cerrar->TabIndex = 8;
			this->cerrar->TabStop = false;
			this->cerrar->Click += gcnew System::EventHandler(this, &Mochila::cerrar_Click);
			// 
			// lstPokemon
			// 
			this->lstPokemon->AutoScroll = true;
			this->lstPokemon->BackColor = System::Drawing::Color::White;
			this->lstPokemon->Controls->Add(this->lblCaramelos);
			this->lstPokemon->Controls->Add(this->btnEvolucionar);
			this->lstPokemon->Controls->Add(this->btnTransferir);
			this->lstPokemon->Controls->Add(this->lblAtaque);
			this->lstPokemon->Controls->Add(this->lblExperiencia);
			this->lstPokemon->Controls->Add(this->lblVida);
			this->lstPokemon->Controls->Add(this->pbPokemon);
			this->lstPokemon->Controls->Add(this->listPokemonAtrapados);
			this->lstPokemon->Location = System::Drawing::Point(98, 12);
			this->lstPokemon->Name = L"lstPokemon";
			this->lstPokemon->Size = System::Drawing::Size(170, 120);
			this->lstPokemon->TabIndex = 6;
			this->lstPokemon->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mochila::pokemons_Paint);
			// 
			// lblCaramelos
			// 
			this->lblCaramelos->AutoSize = true;
			this->lblCaramelos->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCaramelos->Location = System::Drawing::Point(218, 238);
			this->lblCaramelos->Name = L"lblCaramelos";
			this->lblCaramelos->Size = System::Drawing::Size(93, 27);
			this->lblCaramelos->TabIndex = 9;
			this->lblCaramelos->Text = L"Caramelos";
			this->lblCaramelos->UseCompatibleTextRendering = true;
			// 
			// btnEvolucionar
			// 
			this->btnEvolucionar->BackColor = System::Drawing::Color::Black;
			this->btnEvolucionar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEvolucionar->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEvolucionar->ForeColor = System::Drawing::Color::Gold;
			this->btnEvolucionar->Location = System::Drawing::Point(218, 314);
			this->btnEvolucionar->Name = L"btnEvolucionar";
			this->btnEvolucionar->Size = System::Drawing::Size(102, 36);
			this->btnEvolucionar->TabIndex = 8;
			this->btnEvolucionar->Text = L"Evolucionar";
			this->btnEvolucionar->UseVisualStyleBackColor = false;
			this->btnEvolucionar->Click += gcnew System::EventHandler(this, &Mochila::btnEvolucionar_Click);
			// 
			// btnTransferir
			// 
			this->btnTransferir->BackColor = System::Drawing::Color::Black;
			this->btnTransferir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnTransferir->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTransferir->ForeColor = System::Drawing::Color::Gold;
			this->btnTransferir->Location = System::Drawing::Point(218, 272);
			this->btnTransferir->Name = L"btnTransferir";
			this->btnTransferir->Size = System::Drawing::Size(102, 36);
			this->btnTransferir->TabIndex = 7;
			this->btnTransferir->Text = L"Transferir";
			this->btnTransferir->UseVisualStyleBackColor = false;
			this->btnTransferir->Click += gcnew System::EventHandler(this, &Mochila::btnTransferir_Click);
			// 
			// lblAtaque
			// 
			this->lblAtaque->AutoSize = true;
			this->lblAtaque->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAtaque->Location = System::Drawing::Point(215, 210);
			this->lblAtaque->Name = L"lblAtaque";
			this->lblAtaque->Size = System::Drawing::Size(76, 23);
			this->lblAtaque->TabIndex = 4;
			this->lblAtaque->Text = L"Ataque";
			// 
			// lblExperiencia
			// 
			this->lblExperiencia->AutoSize = true;
			this->lblExperiencia->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblExperiencia->Location = System::Drawing::Point(215, 185);
			this->lblExperiencia->Name = L"lblExperiencia";
			this->lblExperiencia->Size = System::Drawing::Size(124, 23);
			this->lblExperiencia->TabIndex = 3;
			this->lblExperiencia->Text = L"Experiencia: ";
			// 
			// lblVida
			// 
			this->lblVida->AutoSize = true;
			this->lblVida->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblVida->Location = System::Drawing::Point(215, 162);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(55, 23);
			this->lblVida->TabIndex = 2;
			this->lblVida->Text = L"Vida:";
			// 
			// pbPokemon
			// 
			this->pbPokemon->Location = System::Drawing::Point(205, 26);
			this->pbPokemon->Name = L"pbPokemon";
			this->pbPokemon->Size = System::Drawing::Size(132, 130);
			this->pbPokemon->TabIndex = 1;
			this->pbPokemon->TabStop = false;
			// 
			// listPokemonAtrapados
			// 
			this->listPokemonAtrapados->FormattingEnabled = true;
			this->listPokemonAtrapados->Location = System::Drawing::Point(23, 26);
			this->listPokemonAtrapados->Name = L"listPokemonAtrapados";
			this->listPokemonAtrapados->Size = System::Drawing::Size(159, 277);
			this->listPokemonAtrapados->TabIndex = 0;
			this->listPokemonAtrapados->SelectedIndexChanged += gcnew System::EventHandler(this, &Mochila::listPokemonAtrapados_SelectedIndexChanged);
			// 
			// lstItems
			// 
			this->lstItems->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lstItems->Controls->Add(this->pbHuevo);
			this->lstItems->Controls->Add(this->lblHuevo);
			this->lstItems->Controls->Add(this->txtRevivir);
			this->lstItems->Controls->Add(this->txtPociones);
			this->lstItems->Controls->Add(this->pictureBox4);
			this->lstItems->Controls->Add(this->pictureBox1);
			this->lstItems->Controls->Add(this->pictureBox2);
			this->lstItems->Controls->Add(this->txtnumpok);
			this->lstItems->Controls->Add(this->txtitem);
			this->lstItems->Location = System::Drawing::Point(98, 138);
			this->lstItems->Name = L"lstItems";
			this->lstItems->Size = System::Drawing::Size(170, 127);
			this->lstItems->TabIndex = 7;
			this->lstItems->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Mochila::items_Paint);
			// 
			// pbHuevo
			// 
			this->pbHuevo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbHuevo.Image")));
			this->pbHuevo->Location = System::Drawing::Point(229, 233);
			this->pbHuevo->Name = L"pbHuevo";
			this->pbHuevo->Size = System::Drawing::Size(68, 70);
			this->pbHuevo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbHuevo->TabIndex = 19;
			this->pbHuevo->TabStop = false;
			this->pbHuevo->Visible = false;
			this->pbHuevo->Click += gcnew System::EventHandler(this, &Mochila::pbHuevo_Click);
			// 
			// lblHuevo
			// 
			this->lblHuevo->AutoSize = true;
			this->lblHuevo->Enabled = false;
			this->lblHuevo->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHuevo->Location = System::Drawing::Point(207, 327);
			this->lblHuevo->Name = L"lblHuevo";
			this->lblHuevo->Size = System::Drawing::Size(37, 23);
			this->lblHuevo->TabIndex = 18;
			this->lblHuevo->Text = L"x 0";
			this->lblHuevo->Visible = false;
			// 
			// txtRevivir
			// 
			this->txtRevivir->AutoSize = true;
			this->txtRevivir->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtRevivir->Location = System::Drawing::Point(35, 327);
			this->txtRevivir->Name = L"txtRevivir";
			this->txtRevivir->Size = System::Drawing::Size(37, 23);
			this->txtRevivir->TabIndex = 14;
			this->txtRevivir->Text = L"x 0";
			// 
			// txtPociones
			// 
			this->txtPociones->AutoSize = true;
			this->txtPociones->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtPociones->Location = System::Drawing::Point(207, 164);
			this->txtPociones->Name = L"txtPociones";
			this->txtPociones->Size = System::Drawing::Size(37, 23);
			this->txtPociones->TabIndex = 13;
			this->txtPociones->Text = L"x 0";
			this->txtPociones->Click += gcnew System::EventHandler(this, &Mochila::txtPociones_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(81, 233);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(68, 70);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(229, 74);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(68, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(70, 74);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(68, 69);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &Mochila::pictureBox2_Click);
			// 
			// txtnumpok
			// 
			this->txtnumpok->AutoSize = true;
			this->txtnumpok->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtnumpok->Location = System::Drawing::Point(25, 162);
			this->txtnumpok->Name = L"txtnumpok";
			this->txtnumpok->Size = System::Drawing::Size(39, 25);
			this->txtnumpok->TabIndex = 9;
			this->txtnumpok->Text = L"x 0";
			this->txtnumpok->Click += gcnew System::EventHandler(this, &Mochila::txtnumpok_Click);
			// 
			// txtitem
			// 
			this->txtitem->AutoSize = true;
			this->txtitem->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtitem->Location = System::Drawing::Point(65, 26);
			this->txtitem->Name = L"txtitem";
			this->txtitem->Size = System::Drawing::Size(60, 28);
			this->txtitem->TabIndex = 0;
			this->txtitem->Text = L"Items:";
			// 
			// Mochila
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(360, 440);
			this->Controls->Add(this->cerrar);
			this->Controls->Add(this->lstPokemon);
			this->Controls->Add(this->btnitems);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->btnpokemon);
			this->Controls->Add(this->lstItems);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Mochila";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Load += gcnew System::EventHandler(this, &Mochila::Mochila_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Mochila::Mochila_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnpokemon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnitems))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cerrar))->EndInit();
			this->lstPokemon->ResumeLayout(false);
			this->lstPokemon->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->EndInit();
			this->lstItems->ResumeLayout(false);
			this->lstItems->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbHuevo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion
		void CerrarBoton()
		{
			cerrar->Visible = true;
			cerrar->Enabled = true;
			cerrar->BackColor = Color::WhiteSmoke;
			cerrar->BringToFront();
		}
		void listaLimpiayOrdena()
		{
			this->listPokemonAtrapados->Items->Clear();
			for (int i = 0; i < personajepokemones->getArreglo().size(); i++)
			{
				int id = personajepokemones->getArreglo()[i]->getID();
				listPokemonAtrapados->Items->Add(id);
			}
			int caramelos = -10;

			MessageBox::Show("¡Que buena evolución!");

			personaje->setCaremelos(caramelos);
			if (personaje->getCaramelos() <= 0 && personaje->getCaramelos()%10 !=0 && personaje->getCaramelos()<10)
			{
				MessageBox::Show("¡No se puede evolucionar más!");
				this->Close();
			}
			lblCaramelos->Text = "Caramelos: " + personaje->getCaramelos().ToString();
		}
	private: System::Void Mochila_Load(System::Object^  sender, System::EventArgs^  e) {

		this->Visible = true;//boton cerrar es visible
		cerrar->Visible = false;//boton cerrar NO es visible
		cerrar->Enabled = false;//boton cerrar NO esta habilitado
		lstPokemon->Visible = false;//lista de pokemon NO es visible
		lstItems->Visible = false;//lista de items NO es visible
		lstPokemon->Enabled = false;//lista de pokemon NO es habilitado
		lstItems->Enabled = false;//lista de items NO es habilitado
		click = false;
	}

	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {

		this->Visible = false;
		this->Enabled = false;
	}
	private: System::Void items_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {


		//this->txtnumpok->Text="x "+ FormParada->poketotal;
	}
	private: System::Void btnpokemon_Click(System::Object^  sender, System::EventArgs^  e) {

		this->lstPokemon->Location = Point(0, 0);
		this->lstPokemon->Size = System::Drawing::Size(360, 440);
		lstPokemon->Visible = true;
		lstPokemon->Enabled = true;
		lstPokemon->BringToFront();//BringToFront para que esté encima de todo y sea lo primero que se vea

		listPokemonAtrapados->Items->Clear();
		for (int i = 0; i < personajepokemones->getArreglo().size(); i++)
		{
			int id = personajepokemones->getArreglo()[i]->getID();
			listPokemonAtrapados->Items->Add(id);
		}



		CerrarBoton();
		
	}
	private: System::Void btnitems_Click(System::Object^  sender, System::EventArgs^  e) {

		
		this->lblHuevo->Visible = true;

		this->lstItems->Location = Point(0, 0);
		this->lstItems->Size = System::Drawing::Size(360, 440);
		lstItems->Visible = true;
		lstItems->Enabled = true;
		pbHuevo->Visible = true;
		this->txtnumpok->Text = "Pokebolas: x" + personaje->getPokebolas().ToString();//cambia el label por "x" y el numero de POKEBOLAS que atrapaste en la POKEPARADA
		this->txtPociones->Text = "Pociones: x" + personaje->getPociones().ToString();//cambia el label por "x" y el numero de POCIONES que atrapaste en la POKEPARADA
		this->txtRevivir->Text = "Revivir: x" + personaje->getRevivir().ToString();//cambia el label por "x" y el numero de REVIVIR que atrapaste en la POKEPARADA
		this->lblCaramelos->Text = "Monedas: x" + personaje->getMonedas().ToString();//cambia el label por "x" y el numero de REVIVIR que atrapaste en la POKEPARADA
		this->lblHuevo->Text = "Huevo: x" + personaje->getHuevo().ToString();
		lstItems->BringToFront();
		CerrarBoton();
		
	}

	private: System::Void btnpokedex_Click(System::Object^  sender, System::EventArgs^  e) {
		CerrarBoton();
	}

	private: System::Void cerrar_Click(System::Object^  sender, System::EventArgs^  e) {

		lstPokemon->Visible = false;
		lstItems->Visible = false;
		cerrar->Enabled = false;
		cerrar->Visible = false;


	}
	private: System::Void Mochila_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {

		switch (e->KeyCode)
		{
		case Keys::Escape:
			this->Close();
		}
	}
	private: System::Void pokemons_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

		
	}
	private: System::Void txtnumpok_Click(System::Object^  sender, System::EventArgs^  e) {



	}
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void txtPociones_Click(System::Object^  sender, System::EventArgs^  e) {
}
	private: System::Void listPokemonAtrapados_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (listPokemonAtrapados->SelectedIndex >= 0)
		{
			CPokemon *pokemon = personajepokemones->getArreglo()[listPokemonAtrapados->SelectedIndex];

			this->pbPokemon->Image = Image::FromFile(pokemon->getID().ToString() + ".gif");
			this->pbPokemon->BackColor = Color::Transparent;
			this->pbPokemon->Parent = lstPokemon;
			this->pbPokemon->Visible = true;
			this->pbPokemon->Enabled = true;
			this->pbPokemon->BringToFront();


			lblVida->Text = "Vida: " + pokemon->getVida().ToString();
			lblExperiencia->Text = "Experiencia: " + pokemon->getExperiencia().ToString();
			lblAtaque->Text = "Ataque: " + pokemon->getAtaque().ToString();
			lblCaramelos->Text = "Caramelos: " + personaje->getCaramelos().ToString();
		}
	}
private: System::Void btnTransferir_Click(System::Object^  sender, System::EventArgs^  e) {

	if (listPokemonAtrapados->SelectedIndex >= 0)
	{
		personajepokemones->eiminar(this->listPokemonAtrapados->SelectedIndex);
		this->listPokemonAtrapados->Items->Clear();
		for (int i = 0; i < personajepokemones->getArreglo().size(); i++)
		{
			int id = personajepokemones->getArreglo()[i]->getID();
			listPokemonAtrapados->Items->Add(id);
		}


		this->pbPokemon->Visible = false;
		this->pbPokemon->Enabled = false;

		lblVida->Text = "";
		lblExperiencia->Text = "";
		lblAtaque->Text = "";
		lblCaramelos->Text = "";
		Random r;

		int caramelos = r.Next(1, 5);

		MessageBox::Show("La transferecia se realizo correctamente, El profesor le ha regalado " + caramelos.ToString() + " caramelos");

		personaje->setCaremelos(caramelos);
	}
}
private: System::Void btnEvolucionar_Click(System::Object^  sender, System::EventArgs^  e) {
	if (listPokemonAtrapados->SelectedIndex >= 0)
	{
		if (personaje->getCaramelos() >= 10)
		{
			
			for (int i = 0; i < personajepokemones->getArreglo().size(); i++)
			{
				/*int id = personajepokemones->getArreglo()[i]->getID();
				listPokemonAtrapados->Items->Add(id);*/
				switch (personajepokemones->getArreglo()[i]->getID())
				{
				case 1:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1001);
					listaLimpiayOrdena();
					break;
				case 2:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1002);
					listaLimpiayOrdena();
					break;
				case 3:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1003);
					listaLimpiayOrdena();
					break;
				case 4:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1004);
					listaLimpiayOrdena();
					break;
				case 5:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1005);
					listaLimpiayOrdena();
					break;
				case 6:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1006);
					listaLimpiayOrdena();
					break;
				case 7:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1007);
					listaLimpiayOrdena();
					break;
				case 8:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1008);
					listaLimpiayOrdena();
					break;
				case 9:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1009);
					listaLimpiayOrdena();
					break;
				case 10:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1010);
					listaLimpiayOrdena();
					break;
				case 11:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1011);
					listaLimpiayOrdena();
					break;
				case 12:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1012);
					listaLimpiayOrdena();
					break;
				case 13:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1013);
					listaLimpiayOrdena();
					break;
				case 14:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1014);
					listaLimpiayOrdena();
					break;
				case 15:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1015);
					listaLimpiayOrdena();
					break;
				case 16:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1016);
					listaLimpiayOrdena();
					break;
				case 17:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1017);
					listaLimpiayOrdena();
					break;
				case 18:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1018);
					listaLimpiayOrdena();
					break;
				case 19:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1019);
					listaLimpiayOrdena();
					break;
				case 20:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1020);
					listaLimpiayOrdena();
					break;
				case 21:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1021);
					listaLimpiayOrdena();
					break;
				case 22:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1022);
					listaLimpiayOrdena();
					break;
				case 23:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1023);
					listaLimpiayOrdena();
					break;
				case 24:
					personajepokemones->eiminar(i);
					this->listPokemonAtrapados->Items->Clear();
					personajepokemones->registrar(pokemon1024);
					listaLimpiayOrdena();
					break;

				}
			}
			
		}
		else{
			MessageBox::Show("Se necesitan 10 caramelos como minimo para evolucionar tu pokemon");
		}
	}
}
private: System::Void pbHuevo_Click(System::Object^  sender, System::EventArgs^  e) {
	//personajepokemones->registrar(pokemon);
	click = true;
	if (personaje->getHuevo()>0)
	{
		int a = r.Next(1001, 1024);
		CPokemon *pokemon5 = new CPokemon(a, 100, 10, 10, 0, 0);
		MessageBox::Show("Pokemon Aleatorio en tu mochila agregado");
		personajepokemones->registrar(pokemon5);
		personaje->setHuevo(-1);
		this->lblHuevo->Text = "Huevo: x" + personaje->getHuevo().ToString();
		click = false;
	}
	else
	{
		MessageBox::Show("Faltan Huevos");
	}
}
};
}
