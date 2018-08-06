#pragma once
#include <conio.h>
#include <stdio.h>
#include "ArrPokemon.h"
#include "Pokeparada.h"
#include "Gimnasio.h"
#include "FormAtrapar.h"
#include "FormBatalla.h"
#include "FormSeleccion.h"
#include "FormParada.h"
#include "Mochila.h"
#include "CPersonaje.h"
#include "CPokemon.h"
#include "CMapa.h"
#include "Monedas.h"

using namespace System;
using namespace std;

namespace PokemonGO {

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
	private:
		int Pantalla;

		//al ser el form principal se iniciliza todos los punteros aquí a usar
		CPersonaje *personaje = new CPersonaje(10, 10);
		CArrPokemon *personajepokemones = new CArrPokemon();

		CPokeparada *pokeparada = new CPokeparada(210,200);
		CGimnasio *gimnasio = new CGimnasio(400, 400);
		CMapa *mapa = new CMapa();
		CArrPokemon *arrpokemon = new CArrPokemon();
		CMonedas *moneda1 = new CMonedas(100, 60);
		CMonedas *moneda2 = new CMonedas(160, 60);
		CMonedas *moneda3 = new CMonedas(220, 60);
		CMonedas *moneda4 = new CMonedas(280, 60);
		CMonedas *moneda5 = new CMonedas(340, 60);
		CMonedas *moneda6 = new CMonedas(100, 120);
		CMonedas *moneda7 = new CMonedas(160, 120);
		CMonedas *moneda8 = new CMonedas(220, 120);
		CMonedas *moneda9 = new CMonedas(280, 120);
		CMonedas *moneda10 = new CMonedas(340, 120);
		CMonedas *moneda11 = new CMonedas(100, 180);
		CMonedas *moneda12 = new CMonedas(160, 180);
		CMonedas *moneda13 = new CMonedas(220, 180);
		CMonedas *moneda14 = new CMonedas(280, 180);
		CMonedas *moneda15 = new CMonedas(340, 180);
		CMonedas *moneda16 = new CMonedas(100, 240);
		CMonedas *moneda17 = new CMonedas(160, 240);
		CMonedas *moneda18 = new CMonedas(220, 240);
		CMonedas *moneda19 = new CMonedas(280, 240);
		CMonedas *moneda20 = new CMonedas(340, 240);
		CMonedas *moneda21 = new CMonedas(100, 300);
		CMonedas *moneda22 = new CMonedas(160, 300);
		CMonedas *moneda23 = new CMonedas(220, 300);
		CMonedas *moneda24 = new CMonedas(280, 300);
		CMonedas *moneda25 = new CMonedas(340, 300);
		CMonedas *moneda26 = new CMonedas(100, 360);
		CMonedas *moneda27 = new CMonedas(160, 360);
		CMonedas *moneda28 = new CMonedas(220, 360);
		CMonedas *moneda29 = new CMonedas(280, 360);
		CMonedas *moneda30 = new CMonedas(340, 360);



		CPokemon *pokemon1 = new CPokemon(22, 100, 10, 10, 0, 0);//charmander
		CPokemon *pokemon2 = new CPokemon(24, 100, 10, 10, 0, 0);//totodaile
		CPokemon *pokemon3 = new CPokemon(21, 100, 10, 10, 0, 0);//pikachu
		CPokemon *pokemon4 = new CPokemon(23, 100, 10, 10, 0, 0);//bolbasaur

		bool inicio;
		int iniciotimer;
		int Instrucciones;
		int MapaIndice;
		int Pokemons;
		int Gimnasios;
		int masPokemons;
		int Monedass;


	private: System::Windows::Forms::PictureBox^  pbSeleccion;
	private: System::Windows::Forms::PictureBox^  pbPokeBola1;
	private: System::Windows::Forms::PictureBox^  pbPokeBola2;
	private: System::Windows::Forms::PictureBox^  pbPokeBola3;
	private: System::Windows::Forms::PictureBox^  pbPokeBola4;
	private: System::Windows::Forms::PictureBox^  pbPokemon1;
	private: System::Windows::Forms::PictureBox^  pbPokemon2;
	private: System::Windows::Forms::PictureBox^  pbPokemon3;
	private: System::Windows::Forms::PictureBox^  pbPokemon4;
	private: System::Windows::Forms::Panel^  pJuego;
	private: System::Windows::Forms::Panel^  panmenu;
	private: System::Windows::Forms::PictureBox^  pbmenu;



			 //int masPokemons;
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

				/*delete pokemon;*/
				//delete personaje;
				delete mapa;
				delete moneda1, moneda2, moneda3, moneda4, moneda5, moneda6, moneda7, moneda8, moneda9, moneda10, moneda11, moneda12, moneda13,
					moneda14, moneda15, moneda16, moneda17, moneda18, moneda19, moneda20, moneda21, moneda22, moneda23, moneda24, moneda25, moneda26,
					moneda27, moneda28, moneda29, moneda30;
			}
		}
	private: System::Windows::Forms::Timer^  tJuego;
	protected:



	private: System::Windows::Forms::PictureBox^  pbClose;
	private: System::Windows::Forms::PictureBox^  pbInicio;
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::Button^  btnJugar;
	private: System::Windows::Forms::PictureBox^  pbInstrucciones;

	private: System::Windows::Forms::PictureBox^  pbAtras;
	private: System::Windows::Forms::TextBox^  txtInstrucciones;
	private: System::Windows::Forms::PictureBox^  pbSiguiente;


	protected:

	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tJuego = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbClose = (gcnew System::Windows::Forms::PictureBox());
			this->pbInicio = (gcnew System::Windows::Forms::PictureBox());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->pbInstrucciones = (gcnew System::Windows::Forms::PictureBox());
			this->pbAtras = (gcnew System::Windows::Forms::PictureBox());
			this->txtInstrucciones = (gcnew System::Windows::Forms::TextBox());
			this->pbSiguiente = (gcnew System::Windows::Forms::PictureBox());
			this->pbSeleccion = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokeBola1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokeBola2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokeBola3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokeBola4 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon2 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon3 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon4 = (gcnew System::Windows::Forms::PictureBox());
			this->pJuego = (gcnew System::Windows::Forms::Panel());
			this->pbmenu = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInicio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInstrucciones))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtras))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSiguiente))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSeleccion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbmenu))->BeginInit();
			this->SuspendLayout();
			// 
			// tJuego
			// 
			this->tJuego->Interval = 1;
			this->tJuego->Tick += gcnew System::EventHandler(this, &MyForm::tJuego_Tick);
			// 
			// pbClose
			// 
			this->pbClose->BackColor = System::Drawing::Color::Transparent;
			this->pbClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pbClose->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbClose.Image")));
			this->pbClose->Location = System::Drawing::Point(118, 12);
			this->pbClose->Name = L"pbClose";
			this->pbClose->Size = System::Drawing::Size(50, 50);
			this->pbClose->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbClose->TabIndex = 2;
			this->pbClose->TabStop = false;
			this->pbClose->Click += gcnew System::EventHandler(this, &MyForm::pbClose_Click);
			// 
			// pbInicio
			// 
			this->pbInicio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbInicio.Image")));
			this->pbInicio->Location = System::Drawing::Point(12, 12);
			this->pbInicio->Name = L"pbInicio";
			this->pbInicio->Size = System::Drawing::Size(100, 50);
			this->pbInicio->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbInicio->TabIndex = 4;
			this->pbInicio->TabStop = false;
			this->pbInicio->Visible = false;
			// 
			// btnSalir
			// 
			this->btnSalir->BackColor = System::Drawing::Color::Black;
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::Gold;
			this->btnSalir->Location = System::Drawing::Point(12, 180);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(100, 43);
			this->btnSalir->TabIndex = 5;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = false;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MyForm::btnSalir_Click);
			// 
			// btnJugar
			// 
			this->btnJugar->BackColor = System::Drawing::Color::Black;
			this->btnJugar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnJugar->Font = (gcnew System::Drawing::Font(L"Candara", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJugar->ForeColor = System::Drawing::Color::Gold;
			this->btnJugar->Location = System::Drawing::Point(12, 236);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(100, 45);
			this->btnJugar->TabIndex = 6;
			this->btnJugar->Text = L"JUGAR";
			this->btnJugar->UseVisualStyleBackColor = false;
			this->btnJugar->Click += gcnew System::EventHandler(this, &MyForm::btnJugar_Click);
			// 
			// pbInstrucciones
			// 
			this->pbInstrucciones->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbInstrucciones.Image")));
			this->pbInstrucciones->Location = System::Drawing::Point(12, 68);
			this->pbInstrucciones->Name = L"pbInstrucciones";
			this->pbInstrucciones->Size = System::Drawing::Size(100, 50);
			this->pbInstrucciones->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbInstrucciones->TabIndex = 8;
			this->pbInstrucciones->TabStop = false;
			this->pbInstrucciones->Visible = false;
			// 
			// pbAtras
			// 
			this->pbAtras->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbAtras.Image")));
			this->pbAtras->Location = System::Drawing::Point(118, 68);
			this->pbAtras->Name = L"pbAtras";
			this->pbAtras->Size = System::Drawing::Size(50, 50);
			this->pbAtras->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbAtras->TabIndex = 10;
			this->pbAtras->TabStop = false;
			this->pbAtras->Visible = false;
			this->pbAtras->Click += gcnew System::EventHandler(this, &MyForm::pbAtras_Click);
			// 
			// txtInstrucciones
			// 
			this->txtInstrucciones->BackColor = System::Drawing::Color::White;
			this->txtInstrucciones->Enabled = false;
			this->txtInstrucciones->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtInstrucciones->Location = System::Drawing::Point(12, 124);
			this->txtInstrucciones->Multiline = true;
			this->txtInstrucciones->Name = L"txtInstrucciones";
			this->txtInstrucciones->ReadOnly = true;
			this->txtInstrucciones->Size = System::Drawing::Size(100, 50);
			this->txtInstrucciones->TabIndex = 11;
			this->txtInstrucciones->Text = L"Hola asdas asd as dasd asd sad asd a";
			this->txtInstrucciones->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtInstrucciones->Visible = false;
			// 
			// pbSiguiente
			// 
			this->pbSiguiente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSiguiente.Image")));
			this->pbSiguiente->Location = System::Drawing::Point(118, 124);
			this->pbSiguiente->Name = L"pbSiguiente";
			this->pbSiguiente->Size = System::Drawing::Size(50, 50);
			this->pbSiguiente->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSiguiente->TabIndex = 12;
			this->pbSiguiente->TabStop = false;
			this->pbSiguiente->Visible = false;
			this->pbSiguiente->Click += gcnew System::EventHandler(this, &MyForm::pbSiguiente_Click);
			// 
			// pbSeleccion
			// 
			this->pbSeleccion->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbSeleccion.Image")));
			this->pbSeleccion->Location = System::Drawing::Point(12, 287);
			this->pbSeleccion->Name = L"pbSeleccion";
			this->pbSeleccion->Size = System::Drawing::Size(100, 50);
			this->pbSeleccion->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbSeleccion->TabIndex = 13;
			this->pbSeleccion->TabStop = false;
			this->pbSeleccion->Visible = false;
			// 
			// pbPokeBola1
			// 
			this->pbPokeBola1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokeBola1.Image")));
			this->pbPokeBola1->Location = System::Drawing::Point(118, 180);
			this->pbPokeBola1->Name = L"pbPokeBola1";
			this->pbPokeBola1->Size = System::Drawing::Size(50, 50);
			this->pbPokeBola1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbPokeBola1->TabIndex = 14;
			this->pbPokeBola1->TabStop = false;
			this->pbPokeBola1->Visible = false;
			this->pbPokeBola1->Click += gcnew System::EventHandler(this, &MyForm::pbPokeBola1_Click);
			// 
			// pbPokeBola2
			// 
			this->pbPokeBola2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokeBola2.Image")));
			this->pbPokeBola2->Location = System::Drawing::Point(174, 180);
			this->pbPokeBola2->Name = L"pbPokeBola2";
			this->pbPokeBola2->Size = System::Drawing::Size(50, 50);
			this->pbPokeBola2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbPokeBola2->TabIndex = 15;
			this->pbPokeBola2->TabStop = false;
			this->pbPokeBola2->Visible = false;
			this->pbPokeBola2->Click += gcnew System::EventHandler(this, &MyForm::pbPokeBola2_Click);
			// 
			// pbPokeBola3
			// 
			this->pbPokeBola3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokeBola3.Image")));
			this->pbPokeBola3->Location = System::Drawing::Point(118, 236);
			this->pbPokeBola3->Name = L"pbPokeBola3";
			this->pbPokeBola3->Size = System::Drawing::Size(50, 50);
			this->pbPokeBola3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbPokeBola3->TabIndex = 16;
			this->pbPokeBola3->TabStop = false;
			this->pbPokeBola3->Visible = false;
			this->pbPokeBola3->Click += gcnew System::EventHandler(this, &MyForm::pbPokeBola3_Click);
			// 
			// pbPokeBola4
			// 
			this->pbPokeBola4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokeBola4.Image")));
			this->pbPokeBola4->Location = System::Drawing::Point(174, 236);
			this->pbPokeBola4->Name = L"pbPokeBola4";
			this->pbPokeBola4->Size = System::Drawing::Size(50, 50);
			this->pbPokeBola4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pbPokeBola4->TabIndex = 17;
			this->pbPokeBola4->TabStop = false;
			this->pbPokeBola4->Visible = false;
			this->pbPokeBola4->Click += gcnew System::EventHandler(this, &MyForm::pbPokeBola4_Click);
			// 
			// pbPokemon1
			// 
			this->pbPokemon1->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokemon1.Image")));
			this->pbPokemon1->Location = System::Drawing::Point(174, 12);
			this->pbPokemon1->Name = L"pbPokemon1";
			this->pbPokemon1->Size = System::Drawing::Size(50, 50);
			this->pbPokemon1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPokemon1->TabIndex = 18;
			this->pbPokemon1->TabStop = false;
			this->pbPokemon1->Visible = false;
			// 
			// pbPokemon2
			// 
			this->pbPokemon2->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokemon2.Image")));
			this->pbPokemon2->Location = System::Drawing::Point(174, 68);
			this->pbPokemon2->Name = L"pbPokemon2";
			this->pbPokemon2->Size = System::Drawing::Size(50, 50);
			this->pbPokemon2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPokemon2->TabIndex = 19;
			this->pbPokemon2->TabStop = false;
			this->pbPokemon2->Visible = false;
			// 
			// pbPokemon3
			// 
			this->pbPokemon3->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokemon3.Image")));
			this->pbPokemon3->Location = System::Drawing::Point(174, 124);
			this->pbPokemon3->Name = L"pbPokemon3";
			this->pbPokemon3->Size = System::Drawing::Size(50, 50);
			this->pbPokemon3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPokemon3->TabIndex = 20;
			this->pbPokemon3->TabStop = false;
			this->pbPokemon3->Visible = false;
			// 
			// pbPokemon4
			// 
			this->pbPokemon4->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPokemon4.Image")));
			this->pbPokemon4->Location = System::Drawing::Point(118, 292);
			this->pbPokemon4->Name = L"pbPokemon4";
			this->pbPokemon4->Size = System::Drawing::Size(50, 50);
			this->pbPokemon4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPokemon4->TabIndex = 21;
			this->pbPokemon4->TabStop = false;
			this->pbPokemon4->Visible = false;
			// 
			// pJuego
			// 
			this->pJuego->BackColor = System::Drawing::Color::Transparent;
			this->pJuego->ForeColor = System::Drawing::Color::Transparent;
			this->pJuego->Location = System::Drawing::Point(174, 292);
			this->pJuego->Margin = System::Windows::Forms::Padding(0);
			this->pJuego->Name = L"pJuego";
			this->pJuego->Size = System::Drawing::Size(50, 50);
			this->pJuego->TabIndex = 22;
			this->pJuego->Visible = false;
			this->pJuego->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::pJuego_Paint);
			// 
			// pbmenu
			// 
			this->pbmenu->BackColor = System::Drawing::Color::Transparent;
			this->pbmenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbmenu.BackgroundImage")));
			this->pbmenu->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbmenu.Image")));
			this->pbmenu->Location = System::Drawing::Point(230, 12);
			this->pbmenu->Margin = System::Windows::Forms::Padding(0);
			this->pbmenu->Name = L"pbmenu";
			this->pbmenu->Size = System::Drawing::Size(50, 50);
			this->pbmenu->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbmenu->TabIndex = 23;
			this->pbmenu->TabStop = false;
			this->pbmenu->Click += gcnew System::EventHandler(this, &MyForm::pbmenu_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 512);
			this->Controls->Add(this->pJuego);
			this->Controls->Add(this->pbPokemon4);
			this->Controls->Add(this->pbPokemon3);
			this->Controls->Add(this->pbPokemon2);
			this->Controls->Add(this->pbPokemon1);
			this->Controls->Add(this->pbPokeBola4);
			this->Controls->Add(this->pbPokeBola3);
			this->Controls->Add(this->pbPokeBola2);
			this->Controls->Add(this->pbPokeBola1);
			this->Controls->Add(this->pbSeleccion);
			this->Controls->Add(this->txtInstrucciones);
			this->Controls->Add(this->pbSiguiente);
			this->Controls->Add(this->pbAtras);
			this->Controls->Add(this->pbInstrucciones);
			this->Controls->Add(this->btnJugar);
			this->Controls->Add(this->btnSalir);
			this->Controls->Add(this->pbInicio);
			this->Controls->Add(this->pbClose);
			this->Controls->Add(this->pbmenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pokemon GO";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::MyForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbClose))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInicio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbInstrucciones))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbAtras))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSiguiente))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbSeleccion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokeBola4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbmenu))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	 void InicioMostrar()
	{
		this->pbInicio->Location = System::Drawing::Point(0, 0);
		this->pbInicio->Size = System::Drawing::Size(512, 512);
		this->pbInicio->Visible = true;
		this->pbInicio->Enabled = true;
		this->pbInicio->BringToFront();

		this->btnSalir->Location = System::Drawing::Point(0, 449);
		this->btnSalir->Size = System::Drawing::Size(146, 51);
		this->btnSalir->Visible = true;
		this->btnSalir->Enabled = true;
		this->btnSalir->BringToFront();

		this->btnJugar->Location = System::Drawing::Point(366, 449);
		this->btnJugar->Size = System::Drawing::Size(146, 51);
		this->btnJugar->Visible = true;
		this->btnJugar->Enabled = true;
		this->btnJugar->BringToFront();
	}

	 void InicioOcultar()
	{
		this->pbInicio->Visible = false;
		this->pbInicio->Enabled = false;
		this->btnSalir->Visible = false;
		this->btnSalir->Enabled = false;
		this->btnJugar->Visible = false;
		this->btnJugar->Enabled = false;
	}

	 void InstruccionesMostrar()
	{
		this->pbInstrucciones->Location = System::Drawing::Point(0, 0);
		this->pbInstrucciones->Size = System::Drawing::Size(512, 512);
		this->pbInstrucciones->Visible = true;
		this->pbInstrucciones->Enabled = true;
		this->pbInstrucciones->BringToFront();

		this->txtInstrucciones->Location = System::Drawing::Point(10, 200);
		this->txtInstrucciones->Size = System::Drawing::Size(180, 150);
		this->txtInstrucciones->Visible = true;
		this->txtInstrucciones->Enabled = true;
		this->txtInstrucciones->BringToFront();

		this->pbAtras->Location = System::Drawing::Point(10, 10);
		this->pbAtras->BackColor = Color::Transparent;
		this->pbAtras->Parent = pbInstrucciones;
		this->pbAtras->Visible = true;
		this->pbAtras->Enabled = true;
		this->pbAtras->BringToFront();

		this->pbSiguiente->Location = System::Drawing::Point(452, 10);
		this->pbSiguiente->BackColor = Color::Transparent;
		this->pbSiguiente->Parent = pbInstrucciones;
		this->pbSiguiente->Visible = true;
		this->pbSiguiente->Enabled = true;
		this->pbSiguiente->BringToFront();

		txtInstrucciones->Text = "Hola soy el profesor Willow";
		Instrucciones = 1;


	}

	 void InstruccionesOcultar()
	{
		this->txtInstrucciones->Visible = false;
		this->txtInstrucciones->Enabled = false;
		this->pbAtras->Visible = false;
		this->pbAtras->Enabled = false;
		this->pbSiguiente->Visible = false;
		this->pbSiguiente->Enabled = false;
	}

	 void SeleccionMostrar()
	{
		this->pbSeleccion->Location = System::Drawing::Point(0, 0);
		this->pbSeleccion->Size = System::Drawing::Size(512, 512);
		this->pbSeleccion->Visible = true;
		this->pbSeleccion->Enabled = true;
		this->pbSeleccion->BringToFront();

		this->pbAtras->Location = System::Drawing::Point(10, 10);
		this->pbAtras->BackColor = Color::Transparent;
		this->pbAtras->Parent = pbSeleccion;
		this->pbAtras->Visible = true;
		this->pbAtras->Enabled = true;
		this->pbAtras->BringToFront();

		this->pbPokeBola1->Location = System::Drawing::Point(120, 400);
		this->pbPokeBola1->BackColor = Color::Transparent;
		this->pbPokeBola1->Parent = pbSeleccion;
		this->pbPokeBola1->Visible = true;
		this->pbPokeBola1->Enabled = true;
		this->pbPokeBola1->BringToFront(); 

		this->pbPokeBola2->Location = System::Drawing::Point(190, 400);
		this->pbPokeBola2->BackColor = Color::Transparent;
		this->pbPokeBola2->Parent = pbSeleccion;
		this->pbPokeBola2->Visible = true;
		this->pbPokeBola2->Enabled = true;
		this->pbPokeBola2->BringToFront();

		this->pbPokeBola3->Location = System::Drawing::Point(260, 400);
		this->pbPokeBola3->BackColor = Color::Transparent;
		this->pbPokeBola3->Parent = pbSeleccion;
		this->pbPokeBola3->Visible = true;
		this->pbPokeBola3->Enabled = true;
		this->pbPokeBola3->BringToFront();

		this->pbPokeBola4->Location = System::Drawing::Point(330, 400);
		this->pbPokeBola4->BackColor = Color::Transparent;
		this->pbPokeBola4->Parent = pbSeleccion;
		this->pbPokeBola4->Visible = true;
		this->pbPokeBola4->Enabled = true;
		this->pbPokeBola4->BringToFront();


	}

	 void SeleccionOcultar()
	{
		this->pbSeleccion->Visible = false;
		this->pbSeleccion->Enabled = false;
		this->pbAtras->Enabled = false;
		this->pbAtras->Visible = false;
		this->pbSiguiente->Visible = false;
		this->pbSiguiente->Enabled = false;
		this->pbPokeBola1->Visible = false;
		this->pbPokeBola1->Enabled = false;
		this->pbPokeBola2->Visible = false;
		this->pbPokeBola2->Enabled = false;
		this->pbPokeBola3->Visible = false;
		this->pbPokeBola3->Enabled = false;
		this->pbPokeBola4->Visible = false;
		this->pbPokeBola4->Enabled = false;
		this->pbmenu->Visible = false;
		this->pbmenu->Enabled = false;

	}

	void PokemonSeleccionar(){
	
		Random ^r = gcnew Random();
		int x = r->Next(1, 5);
		if (x == 1)
		{
			this->pbPokemon1->Location = System::Drawing::Point(140, 80);
			this->pbPokemon1->Size = System::Drawing::Size(250, 250);
			this->pbPokemon1->Visible = true;
			this->pbPokemon1->Enabled = true;
			this->pbPokemon1->Parent = pbSeleccion;
			this->pbPokemon1->BringToFront();

			personajepokemones->registrar(pokemon1);
		}
		if (x == 2)
		{
			this->pbPokemon2->Location = System::Drawing::Point(140, 80);
			this->pbPokemon2->Size = System::Drawing::Size(250, 250);
			this->pbPokemon2->Visible = true;
			this->pbPokemon2->Enabled = true;
			this->pbPokemon2->Parent = pbSeleccion;
			this->pbPokemon2->BringToFront();

			personajepokemones->registrar(pokemon2);
		}
		if (x == 3)
		{
			this->pbPokemon3->Location = System::Drawing::Point(140, 80);
			this->pbPokemon3->Size = System::Drawing::Size(250, 250);
			this->pbPokemon3->Visible = true;
			this->pbPokemon3->Enabled = true;
			this->pbPokemon3->Parent = pbSeleccion;
			this->pbPokemon3->BringToFront();

			personajepokemones->registrar(pokemon3);
		}
		if (x == 4)
		{
			this->pbPokemon4->Location = System::Drawing::Point(140, 80);
			this->pbPokemon4->Size = System::Drawing::Size(250, 250);
			this->pbPokemon4->Visible = true;
			this->pbPokemon4->Enabled = true;
			this->pbPokemon4->Parent = pbSeleccion;
			this->pbPokemon4->BringToFront();

			personajepokemones->registrar(pokemon4);
		}

		
		this->pbPokeBola1->Enabled = false;
		this->pbPokeBola2->Enabled = false;
		this->pbPokeBola3->Enabled = false;
		this->pbPokeBola4->Enabled = false;

		inicio = true;

		delete r;

		this->tJuego->Enabled = true;
	}

	 void JuegoMostrar()
	{
		this->pJuego->Location = System::Drawing::Point(0, 0);
		this->pJuego->Size = System::Drawing::Size(512, 512);
		this->pJuego->Visible = true;
		this->pJuego->Enabled = true;
		this->pJuego->BringToFront();

		this->pbmenu->Location = System::Drawing::Point(225, 440);
		this->pbmenu->Visible = true;
		this->pbmenu->Enabled = true;
		
		this->pbmenu->BringToFront();

		
		
	}

	void JuegoGenerar()
	{
		Random ^r = gcnew Random();

		MapaIndice = r->Next(1, 5);
		
		Pokemons = r->Next(1, 5);
		arrpokemon->generar(Pokemons);
		
		masPokemons = r->Next(1, 6);

		delete r;

	}


	void MochilaMostrar()
	{
		Mochila ^mochila = gcnew Mochila();
		mochila->personaje = personaje;
		mochila->personajepokemones = personajepokemones;
		mochila->ShowDialog();
		mochila->Location = System::Drawing::Point(9000000000000000000, 800000);
	}
	void ColisionDeMonedas()
	{
		personaje->setMonedas(50);
		Mochila ^mochila = gcnew Mochila();
		mochila->personaje = personaje;
		mochila->personajepokemones = personajepokemones;
	}

	void Colisiones()
	{
		bool colision = false;

		for (int i = 0; i < this->arrpokemon->getArreglo().size(); i++)//recorres el arreglo
		{
			CPokemon *pokemon = arrpokemon->getArreglo()[i];

			if (personaje->getPosicion().IntersectsWith(pokemon->getPosicion()))//comparas si se intercepta
			{
				colision = true;

				FormAtrapar ^frmAtrapar = gcnew FormAtrapar();
				frmAtrapar->pokemon = pokemon;//todos los datos se pasan al form atrapar
				frmAtrapar->personajepokemones = personajepokemones;
				frmAtrapar->personaje = personaje;
				frmAtrapar->ShowDialog();

				this->personaje->setX(this->personaje->getX() - 20);
				this->personaje->setY(this->personaje->getY() - 20);
				arrpokemon->eiminar(i);
				break;
			}
			if (personaje->getPosicion().IntersectsWith(pokeparada->getPosicion()))
			{
				colision = true;

				FormParada  ^frmParada = gcnew FormParada();
				frmParada->personaje = personaje;//todos los datos de personaje se pasan al form parada
				frmParada->ShowDialog();


				this->personaje->setX(this->personaje->getX() - 20);
				this->personaje->setY(this->personaje->getY() - 20);

				break;
			}
			if (personaje->getPosicion().IntersectsWith(gimnasio->getPosicion()))
			{
				colision = true;

				/*
				FormBatalla ^frmBatalla = gcnew FormBatalla();
				frmBatalla->personaje = personaje;//todos los datos de personaje se pasan al form batalla
				frmBatalla->personajepokemones = personajepokemones;
				frmBatalla->ShowDialog();
				*/

				FormSeleccion ^frmSeleccion = gcnew FormSeleccion();
				frmSeleccion->personaje = personaje;//todos los datos de personaje se pasan al form batalla
				frmSeleccion->personajepokemones = personajepokemones;
				frmSeleccion->ShowDialog();

				this->personaje->setX(this->personaje->getX() - 20);
				this->personaje->setY(this->personaje->getY() - 20);

				break;
			}
			

		}
		
	}
	private: System::Void tJuego_Tick(System::Object^  sender, System::EventArgs^  e) 
	{
		
		if (inicio)
		{
			if (iniciotimer == 150)
			{
				this->SeleccionOcultar();
				this->JuegoMostrar();
				this->JuegoGenerar();
				inicio = false;
			}
			iniciotimer++;
			
		}
		
		Graphics ^g = this->pJuego->CreateGraphics();

		int cWidth = (int)g->VisibleClipBounds.Width;
		int cHeight = (int)g->VisibleClipBounds.Height;
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		espacio->MaximumBuffer = System::Drawing::Size(cWidth + 1, cHeight + 1);
		BufferedGraphics ^buffer = espacio->Allocate(g, Drawing::Rectangle(0, 0, cWidth, cHeight));
		buffer->Graphics->Clear(System::Drawing::Color::FromArgb(1, 1, 1));

		Bitmap ^bmpMapa1 = gcnew Bitmap("Mapa1.png");
		Bitmap ^bmpMapa2 = gcnew Bitmap("Mapa2.png");
		Bitmap ^bmpMapa3 = gcnew Bitmap("Mapa3.png");
		Bitmap ^bmpMapa4 = gcnew Bitmap("Mapa4.png");
		Bitmap ^bmpMapa5 = gcnew Bitmap("mapa5.png");
		Bitmap ^bmpMonedas = gcnew Bitmap("monedas.png");
		Bitmap ^bmpPersonaje = gcnew Bitmap("Personaje.png");
		
		Bitmap ^bmpPokeparada = gcnew Bitmap("pokeparada.png");
		

		Bitmap ^bmpGimnasio = gcnew Bitmap("Gimnasio.png");
		

		if (MapaIndice == 1){
			mapa->dibujar(buffer, bmpMapa1);
			personaje->dibujar(buffer, bmpPersonaje);
			pokeparada->dibujar(buffer, bmpPokeparada);
			gimnasio->dibujar(buffer, bmpGimnasio);
		}
		if (MapaIndice == 2){
			mapa->dibujar(buffer, bmpMapa2);
			personaje->dibujar(buffer, bmpPersonaje);
			pokeparada->dibujar(buffer, bmpPokeparada);
			gimnasio->dibujar(buffer, bmpGimnasio);
		}
		if (MapaIndice == 3){
			mapa->dibujar(buffer, bmpMapa3);
			personaje->dibujar(buffer, bmpPersonaje);
			pokeparada->dibujar(buffer, bmpPokeparada);
			gimnasio->dibujar(buffer, bmpGimnasio);
		}
		if (MapaIndice == 4){
			mapa->dibujar(buffer, bmpMapa4);
			personaje->dibujar(buffer, bmpPersonaje);
			pokeparada->dibujar(buffer, bmpPokeparada);
			gimnasio->dibujar(buffer, bmpGimnasio);
		}
		if (MapaIndice == 5){
			mapa->dibujar(buffer, bmpMapa5);
			personaje->dibujar(buffer, bmpPersonaje);
			moneda1 ->dibujar(buffer, bmpMonedas);
			moneda2 ->dibujar(buffer, bmpMonedas);
			moneda3 ->dibujar(buffer, bmpMonedas);
			moneda4 ->dibujar(buffer, bmpMonedas);
			moneda5 ->dibujar(buffer, bmpMonedas);
			moneda6 ->dibujar(buffer, bmpMonedas);
			moneda7 ->dibujar(buffer, bmpMonedas);
			moneda8 ->dibujar(buffer, bmpMonedas);
			moneda9 ->dibujar(buffer, bmpMonedas);
			moneda10->dibujar(buffer, bmpMonedas);
			moneda11->dibujar(buffer, bmpMonedas);
			moneda12->dibujar(buffer, bmpMonedas);
			moneda13->dibujar(buffer, bmpMonedas);
			moneda14->dibujar(buffer, bmpMonedas);
			moneda15->dibujar(buffer, bmpMonedas);
			moneda16->dibujar(buffer, bmpMonedas);
			moneda17->dibujar(buffer, bmpMonedas);
			moneda18->dibujar(buffer, bmpMonedas);
			moneda19->dibujar(buffer, bmpMonedas);
			moneda20->dibujar(buffer, bmpMonedas);
			moneda21->dibujar(buffer, bmpMonedas);
			moneda22->dibujar(buffer, bmpMonedas);
			moneda23->dibujar(buffer, bmpMonedas);
			moneda24->dibujar(buffer, bmpMonedas);
			moneda25->dibujar(buffer, bmpMonedas);
			moneda26->dibujar(buffer, bmpMonedas);
			moneda27->dibujar(buffer, bmpMonedas);
			moneda28->dibujar(buffer, bmpMonedas);
			moneda29->dibujar(buffer, bmpMonedas);
			moneda30->dibujar(buffer, bmpMonedas);
		}

		
		
		
		this->arrpokemon->dibujar(buffer);
		//this->arrmonedas->dibujar(buffer, bmpMonedas);
		buffer->Render(g);

		delete buffer, espacio, g;
		delete bmpPersonaje, bmpMapa1, bmpMapa2, bmpMapa3, bmpMapa4,bmpPersonaje,bmpPokeparada,bmpGimnasio;

	}

	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

		inicio = false;
		iniciotimer = 0;

		Pantalla = 1;
		MapaIndice = 1;

		this->InicioMostrar();

	}

	private: System::Void MyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{

		if (e->KeyCode == Keys::Up)
		{
			personaje->direccion = Direcciones::Arriba;
		}
		else if (e->KeyCode == Keys::Down)
		{
			personaje->direccion = Direcciones::Abajo;
		}
		else if (e->KeyCode == Keys::Left)
		{
			personaje->direccion = Direcciones::Izquierda;
		}
		else if (e->KeyCode == Keys::Right)
		{
			personaje->direccion = Direcciones::Derecha;
		}
		else if (e->KeyCode == Keys::P)
		{
			MochilaMostrar();
		}
		else if (e->KeyCode == Keys::Escape)
		{
			this->Close();
		}
		else if (e->KeyCode == Keys::M)
		{
			MessageBox::Show("Tienes " + personaje->getMonedas() + " monedas\nTienes "+personaje->getMedallas()+" medallas ganadas");

		}
		else if (e->KeyCode == Keys::A)
		{
			MapaIndice = 5;
		}
		else if (e->KeyCode == Keys::S)
		{
			MapaIndice = 1;
		}

		else 
		{
			return;
		}

		int anchoP = 68 / 2;
		int altoP = 72 / 2;
		int x = personaje->getX();
		int y = personaje->getY();

		if (MapaIndice == 1 || MapaIndice == 2 || MapaIndice == 3 || MapaIndice == 4){
			if (x + anchoP > 512 && y + altoP < 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				this->JuegoGenerar();
				this->Colisiones();
				personaje->setX(0);
			}
			else if (x + anchoP < 512 && y + altoP > 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				this->JuegoGenerar();
				this->Colisiones();
				personaje->setY(0);
			}
			else if (x < 0 && y + altoP < 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				this->JuegoGenerar();
				this->Colisiones();
				personaje->setX(512 - anchoP);
			}
			else if (x + anchoP < 512 && y < 0)//para cambiar de lugar al personaje y resetear el mapa
			{
				this->JuegoGenerar();
				this->Colisiones();
				personaje->setY(512 - altoP);
			}
		}
		else {
			MapaIndice = 5;
			arrpokemon->eliminarTODOS();
			if (personaje->getPosicion().IntersectsWith(moneda1->getPosicion()))
			{
				ColisionDeMonedas();
				moneda1->setX(516);
				moneda1->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda2->getPosicion()))
			{
				ColisionDeMonedas();
				moneda2->setX(516);
				moneda2->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda3->getPosicion()))
			{
				ColisionDeMonedas();
				moneda3->setX(516);
				moneda3->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda4->getPosicion()))
			{
				ColisionDeMonedas();
				moneda4->setX(516);
				moneda4->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda5->getPosicion()))
			{
				ColisionDeMonedas();
				moneda5->setX(516);
				moneda5->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda6->getPosicion()))
			{
				ColisionDeMonedas();
				moneda6->setX(516);
				moneda6->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda7->getPosicion()))
			{
				ColisionDeMonedas();
				moneda7->setX(516);
				moneda7->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda8->getPosicion()))
			{
				ColisionDeMonedas();
				moneda8->setX(516);
				moneda8->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda9->getPosicion()))
			{
				ColisionDeMonedas();
				moneda9->setX(516);
				moneda9->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda10->getPosicion()))
			{
				ColisionDeMonedas();
				moneda10->setX(516);
				moneda10->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda11->getPosicion()))
			{
				ColisionDeMonedas();
				moneda11->setX(516);
				moneda11->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda12->getPosicion()))
			{
				ColisionDeMonedas();
				moneda12->setX(516);
				moneda12->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda13->getPosicion()))
			{
				ColisionDeMonedas();
				moneda13->setX(516);
				moneda13->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda14->getPosicion()))
			{
				ColisionDeMonedas();
				moneda14->setX(516);
				moneda14->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda15->getPosicion()))
			{
				ColisionDeMonedas();
				moneda15->setX(516);
				moneda15->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda16->getPosicion()))
			{
				ColisionDeMonedas();
				moneda16->setX(516);
				moneda16->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda17->getPosicion()))
			{
				ColisionDeMonedas();
				moneda17->setX(516);
				moneda17->setY(516);
			}if (personaje->getPosicion().IntersectsWith(moneda18->getPosicion()))
			{
				ColisionDeMonedas();
				moneda18->setX(516);
				moneda18->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda19->getPosicion()))
			{
				ColisionDeMonedas();
				moneda19->setX(516);
				moneda19->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda20->getPosicion()))
			{
				ColisionDeMonedas();
				moneda20->setX(516);
				moneda20->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda21->getPosicion()))
			{
				ColisionDeMonedas();
				moneda21->setX(516);
				moneda21->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda22->getPosicion()))
			{
				ColisionDeMonedas();
				moneda22->setX(516);
				moneda22->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda23->getPosicion()))
			{
				ColisionDeMonedas();
				moneda23->setX(516);
				moneda23->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda24->getPosicion()))
			{
				ColisionDeMonedas();
				moneda24->setX(516);
				moneda24->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda25->getPosicion()))
			{
				ColisionDeMonedas();
				moneda25->setX(516);
				moneda25->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda26->getPosicion()))
			{
				ColisionDeMonedas();
				moneda26->setX(516);
				moneda26->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda27->getPosicion()))
			{
				ColisionDeMonedas();
				moneda27->setX(516);
				moneda27->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda28->getPosicion()))
			{
				ColisionDeMonedas();
				moneda28->setX(516);
				moneda28->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda29->getPosicion()))
			{
				ColisionDeMonedas();
				moneda29->setX(516);
				moneda29->setY(516);
			}
			if (personaje->getPosicion().IntersectsWith(moneda30->getPosicion()))
			{
				ColisionDeMonedas();
				moneda30->setX(516);
				moneda30->setY(516);
			}



			if (x + anchoP > 512 && y + altoP < 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				personaje->setX(0);
				
				
			}
			else if (x + anchoP < 512 && y + altoP > 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				personaje->setY(0);
				
			}
			else if (x < 0 && y + altoP < 512)//para cambiar de lugar al personaje y resetear el mapa
			{
				personaje->setX(512 - anchoP);
			}
			else if (x + anchoP < 512 && y < 0)//para cambiar de lugar al personaje y resetear el mapa
			{
				personaje->setY(512 - altoP);
			}

		}
		this->Colisiones();

		this->personaje->mover();

	}

	private: System::Void btnJugar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->InicioOcultar();
		this->InstruccionesMostrar();
		Pantalla = 2;
	}

	private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void pbAtras_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Pantalla == 2)
		{
			Instrucciones--;

			if (Instrucciones == 0)
			{
				this->InstruccionesOcultar();
				this->InicioMostrar();
				Pantalla = 1;
				return;
			}
			else
			{

				if (Instrucciones == 1)
				{
					txtInstrucciones->Text = "Hola soy el profesor Willow";
				}
				if (Instrucciones == 2)
				{
					txtInstrucciones->Text = "Tu misión sera completar la pokedex";
				}
				if (Instrucciones == 3)
				{
					txtInstrucciones->Text = "Ademas podrás combatir en ginmasios para aumentar tu experiencia";
				}
				if (Instrucciones == 4)
				{
					txtInstrucciones->Text = "Para facilitar tu mision escoge uno de estos cuatros pokemones.";
				}
			}
		}
		if (Pantalla == 3)
		{
			this->SeleccionOcultar();
			this->InstruccionesMostrar();
			Pantalla = 2;
		}

	}
	
	private: System::Void pbSiguiente_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Pantalla == 2)
		{
			Instrucciones++;

			if (Instrucciones == 5)
			{
				this->InstruccionesOcultar();
				this->SeleccionMostrar();
				Pantalla = 3;
				return;
			}
			else
			{
				if (Instrucciones == 2)
				{
					txtInstrucciones->Text = "Tu misión sera completar la pokedex";
				}
				if (Instrucciones == 3)
				{
					txtInstrucciones->Text = "Ademas podrás combatir en ginmasios para aumentar tu experiencia";
				}
				if (Instrucciones == 4)
				{
					txtInstrucciones->Text = "Para facilitar tu mision escoge uno de estos cuatros pokemones.";
				}
			}
		}
		
	}
	
	private: System::Void pbPokeBola1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PokemonSeleccionar();
		this->pbAtras->Location = System::Drawing::Point(10, 10);
		this->pbAtras->BackColor = Color::Transparent;
		this->pbAtras->Parent = pbSeleccion;
		this->pbAtras->Visible = false;
		this->pbAtras->Enabled = false;
		this->pbAtras->BringToFront();
		
	}
	
	private: System::Void pbPokeBola4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PokemonSeleccionar();
		this->pbAtras->Location = System::Drawing::Point(10, 10);
		this->pbAtras->BackColor = Color::Transparent;
		this->pbAtras->Parent = pbSeleccion;
		this->pbAtras->Visible = false;
		this->pbAtras->Enabled = false;
		this->pbAtras->BringToFront();
	}
	
	private: System::Void pbPokeBola3_Click(System::Object^  sender, System::EventArgs^  e) {
	
	this->PokemonSeleccionar();
	this->pbAtras->Location = System::Drawing::Point(10, 10);
	this->pbAtras->BackColor = Color::Transparent;
	this->pbAtras->Parent = pbSeleccion;
	this->pbAtras->Visible = false;
	this->pbAtras->Enabled = false;
	this->pbAtras->BringToFront();
	}
	
	private: System::Void pbPokeBola2_Click(System::Object^  sender, System::EventArgs^  e) {
		this->PokemonSeleccionar();
		this->pbAtras->Location = System::Drawing::Point(10, 10);
		this->pbAtras->BackColor = Color::Transparent;
		this->pbAtras->Parent = pbSeleccion;
		this->pbAtras->Visible = false;
		this->pbAtras->Enabled = false;
		this->pbAtras->BringToFront();
	}

private: System::Void pJuego_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void pbmenu_Click(System::Object^  sender, System::EventArgs^  e) {


	MochilaMostrar();

}
private: System::Void pbClose_Click(System::Object^  sender, System::EventArgs^  e) {
}





};
}
