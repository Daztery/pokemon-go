#pragma once

#include "CPersonaje.h"
#include "CPokemon.h"
#include "ArrPokemon.h"

namespace PokemonGO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormBatalla
	/// </summary>
	public ref class FormBatalla : public System::Windows::Forms::Form
	{
	public:
		CPersonaje *personaje;//no se inicializa porque ya se inicializó en el form principal "Myform"
		CArrPokemon *personajepokemones;//no se inicializa porque ya se inicializó en el form principal "Myform"
		int pokemonseleccionado;

		CPokemon *ginmasiopokemon;//no se inicializa porque ya se inicializó en el form principal "Myform"
		CPokemon *pokemon;//no se inicializa porque ya se inicializó en el form principal "Myform"

		int Tiempo1;
		int Tiempo2;
		int tick;

		int Ataque1;
		int Ataque2;

	private: System::Windows::Forms::Label^  lblAtaque1Valor;
	public:

	public:

	private: System::Windows::Forms::Label^  lblVida1Valor;

	private: System::Windows::Forms::Label^  lblVida2Valor;
	private: System::Windows::Forms::Label^  lblAtaque2Valor;
	private: System::Windows::Forms::Label^  lblTiempo1Valor;

	private: System::Windows::Forms::Label^  lblTiempo1;
	private: System::Windows::Forms::Label^  lblTiempo2Valor;


	private: System::Windows::Forms::Label^  lblTiempo2;

	private: System::Windows::Forms::Timer^  tBatalla;
	private: System::Windows::Forms::PictureBox^  pbCerrar;
	private: System::Windows::Forms::PictureBox^  pbFondo;



	public:



		FormBatalla(void)
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
		~FormBatalla()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::PictureBox^  pbPokemon1;
	private: System::Windows::Forms::PictureBox^  pbPokemon2;


	private: System::Windows::Forms::Panel^  pInformacion1;
	private: System::Windows::Forms::Panel^  pInformacion2;
	private: System::Windows::Forms::Label^  lblVida2;
	private: System::Windows::Forms::Label^  lblAtaque2;






	private: System::Windows::Forms::Panel^  pTurno;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  lblAtaque1;
	private: System::Windows::Forms::Label^  lblVida1;
	private: System::ComponentModel::IContainer^  components;
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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormBatalla::typeid));
			this->pbPokemon1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbPokemon2 = (gcnew System::Windows::Forms::PictureBox());
			this->pInformacion1 = (gcnew System::Windows::Forms::Panel());
			this->lblTiempo1Valor = (gcnew System::Windows::Forms::Label());
			this->lblTiempo1 = (gcnew System::Windows::Forms::Label());
			this->lblVida1Valor = (gcnew System::Windows::Forms::Label());
			this->lblAtaque1Valor = (gcnew System::Windows::Forms::Label());
			this->lblAtaque1 = (gcnew System::Windows::Forms::Label());
			this->lblVida1 = (gcnew System::Windows::Forms::Label());
			this->pInformacion2 = (gcnew System::Windows::Forms::Panel());
			this->lblTiempo2Valor = (gcnew System::Windows::Forms::Label());
			this->lblTiempo2 = (gcnew System::Windows::Forms::Label());
			this->lblVida2Valor = (gcnew System::Windows::Forms::Label());
			this->lblAtaque2Valor = (gcnew System::Windows::Forms::Label());
			this->lblAtaque2 = (gcnew System::Windows::Forms::Label());
			this->lblVida2 = (gcnew System::Windows::Forms::Label());
			this->pTurno = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tBatalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbCerrar = (gcnew System::Windows::Forms::PictureBox());
			this->pbFondo = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon2))->BeginInit();
			this->pInformacion1->SuspendLayout();
			this->pInformacion2->SuspendLayout();
			this->pTurno->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFondo))->BeginInit();
			this->SuspendLayout();
			// 
			// pbPokemon1
			// 
			this->pbPokemon1->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon1->Location = System::Drawing::Point(386, 116);
			this->pbPokemon1->Name = L"pbPokemon1";
			this->pbPokemon1->Size = System::Drawing::Size(90, 90);
			this->pbPokemon1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbPokemon1->TabIndex = 4;
			this->pbPokemon1->TabStop = false;
			// 
			// pbPokemon2
			// 
			this->pbPokemon2->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon2->Location = System::Drawing::Point(37, 378);
			this->pbPokemon2->Name = L"pbPokemon2";
			this->pbPokemon2->Size = System::Drawing::Size(90, 90);
			this->pbPokemon2->TabIndex = 5;
			this->pbPokemon2->TabStop = false;
			// 
			// pInformacion1
			// 
			this->pInformacion1->BackColor = System::Drawing::Color::White;
			this->pInformacion1->Controls->Add(this->lblTiempo1Valor);
			this->pInformacion1->Controls->Add(this->lblTiempo1);
			this->pInformacion1->Controls->Add(this->lblVida1Valor);
			this->pInformacion1->Controls->Add(this->lblAtaque1Valor);
			this->pInformacion1->Controls->Add(this->lblAtaque1);
			this->pInformacion1->Controls->Add(this->lblVida1);
			this->pInformacion1->Location = System::Drawing::Point(201, 116);
			this->pInformacion1->Name = L"pInformacion1";
			this->pInformacion1->Size = System::Drawing::Size(170, 90);
			this->pInformacion1->TabIndex = 6;
			// 
			// lblTiempo1Valor
			// 
			this->lblTiempo1Valor->AutoSize = true;
			this->lblTiempo1Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo1Valor->Location = System::Drawing::Point(78, 5);
			this->lblTiempo1Valor->Name = L"lblTiempo1Valor";
			this->lblTiempo1Valor->Size = System::Drawing::Size(19, 23);
			this->lblTiempo1Valor->TabIndex = 10;
			this->lblTiempo1Valor->Text = L"3";
			// 
			// lblTiempo1
			// 
			this->lblTiempo1->AutoSize = true;
			this->lblTiempo1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo1->Location = System::Drawing::Point(11, 8);
			this->lblTiempo1->Name = L"lblTiempo1";
			this->lblTiempo1->Size = System::Drawing::Size(63, 19);
			this->lblTiempo1->TabIndex = 9;
			this->lblTiempo1->Text = L"Tiempo:";
			// 
			// lblVida1Valor
			// 
			this->lblVida1Valor->AutoSize = true;
			this->lblVida1Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida1Valor->Location = System::Drawing::Point(77, 31);
			this->lblVida1Valor->Name = L"lblVida1Valor";
			this->lblVida1Valor->Size = System::Drawing::Size(36, 23);
			this->lblVida1Valor->TabIndex = 7;
			this->lblVida1Valor->Text = L"100";
			// 
			// lblAtaque1Valor
			// 
			this->lblAtaque1Valor->AutoSize = true;
			this->lblAtaque1Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAtaque1Valor->Location = System::Drawing::Point(78, 54);
			this->lblAtaque1Valor->Name = L"lblAtaque1Valor";
			this->lblAtaque1Valor->Size = System::Drawing::Size(76, 23);
			this->lblAtaque1Valor->TabIndex = 4;
			this->lblAtaque1Valor->Text = L"Defensa";
			// 
			// lblAtaque1
			// 
			this->lblAtaque1->AutoSize = true;
			this->lblAtaque1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAtaque1->Location = System::Drawing::Point(14, 58);
			this->lblAtaque1->Name = L"lblAtaque1";
			this->lblAtaque1->Size = System::Drawing::Size(58, 19);
			this->lblAtaque1->TabIndex = 3;
			this->lblAtaque1->Text = L"Acción:";
			// 
			// lblVida1
			// 
			this->lblVida1->AutoSize = true;
			this->lblVida1->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida1->Location = System::Drawing::Point(14, 33);
			this->lblVida1->Name = L"lblVida1";
			this->lblVida1->Size = System::Drawing::Size(42, 19);
			this->lblVida1->TabIndex = 2;
			this->lblVida1->Text = L"Vida:";
			// 
			// pInformacion2
			// 
			this->pInformacion2->BackColor = System::Drawing::Color::White;
			this->pInformacion2->Controls->Add(this->lblTiempo2Valor);
			this->pInformacion2->Controls->Add(this->lblTiempo2);
			this->pInformacion2->Controls->Add(this->lblVida2Valor);
			this->pInformacion2->Controls->Add(this->lblAtaque2Valor);
			this->pInformacion2->Controls->Add(this->lblAtaque2);
			this->pInformacion2->Controls->Add(this->lblVida2);
			this->pInformacion2->Location = System::Drawing::Point(144, 378);
			this->pInformacion2->Name = L"pInformacion2";
			this->pInformacion2->Size = System::Drawing::Size(170, 90);
			this->pInformacion2->TabIndex = 7;
			// 
			// lblTiempo2Valor
			// 
			this->lblTiempo2Valor->AutoSize = true;
			this->lblTiempo2Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo2Valor->Location = System::Drawing::Point(71, 5);
			this->lblTiempo2Valor->Name = L"lblTiempo2Valor";
			this->lblTiempo2Valor->Size = System::Drawing::Size(19, 23);
			this->lblTiempo2Valor->TabIndex = 8;
			this->lblTiempo2Valor->Text = L"3";
			// 
			// lblTiempo2
			// 
			this->lblTiempo2->AutoSize = true;
			this->lblTiempo2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTiempo2->Location = System::Drawing::Point(6, 8);
			this->lblTiempo2->Name = L"lblTiempo2";
			this->lblTiempo2->Size = System::Drawing::Size(63, 19);
			this->lblTiempo2->TabIndex = 7;
			this->lblTiempo2->Text = L"Tiempo:";
			// 
			// lblVida2Valor
			// 
			this->lblVida2Valor->AutoSize = true;
			this->lblVida2Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida2Valor->Location = System::Drawing::Point(71, 30);
			this->lblVida2Valor->Name = L"lblVida2Valor";
			this->lblVida2Valor->Size = System::Drawing::Size(36, 23);
			this->lblVida2Valor->TabIndex = 6;
			this->lblVida2Valor->Text = L"100";
			// 
			// lblAtaque2Valor
			// 
			this->lblAtaque2Valor->AutoSize = true;
			this->lblAtaque2Valor->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAtaque2Valor->Location = System::Drawing::Point(71, 56);
			this->lblAtaque2Valor->Name = L"lblAtaque2Valor";
			this->lblAtaque2Valor->Size = System::Drawing::Size(69, 23);
			this->lblAtaque2Valor->TabIndex = 5;
			this->lblAtaque2Valor->Text = L"Ataque";
			// 
			// lblAtaque2
			// 
			this->lblAtaque2->AutoSize = true;
			this->lblAtaque2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblAtaque2->Location = System::Drawing::Point(7, 59);
			this->lblAtaque2->Name = L"lblAtaque2";
			this->lblAtaque2->Size = System::Drawing::Size(58, 19);
			this->lblAtaque2->TabIndex = 1;
			this->lblAtaque2->Text = L"Acción:";
			// 
			// lblVida2
			// 
			this->lblVida2->AutoSize = true;
			this->lblVida2->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblVida2->Location = System::Drawing::Point(7, 34);
			this->lblVida2->Name = L"lblVida2";
			this->lblVida2->Size = System::Drawing::Size(42, 19);
			this->lblVida2->TabIndex = 0;
			this->lblVida2->Text = L"Vida:";
			// 
			// pTurno
			// 
			this->pTurno->BackColor = System::Drawing::Color::White;
			this->pTurno->Controls->Add(this->label3);
			this->pTurno->Location = System::Drawing::Point(12, 35);
			this->pTurno->Name = L"pTurno";
			this->pTurno->Size = System::Drawing::Size(359, 46);
			this->pTurno->TabIndex = 8;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 19);
			this->label3->TabIndex = 1;
			this->label3->Text = L"TIRO:";
			// 
			// tBatalla
			// 
			this->tBatalla->Enabled = true;
			this->tBatalla->Tick += gcnew System::EventHandler(this, &FormBatalla::tBatalla_Tick);
			// 
			// pbCerrar
			// 
			this->pbCerrar->BackColor = System::Drawing::Color::Transparent;
			this->pbCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCerrar.Image")));
			this->pbCerrar->Location = System::Drawing::Point(450, 12);
			this->pbCerrar->Name = L"pbCerrar";
			this->pbCerrar->Size = System::Drawing::Size(50, 50);
			this->pbCerrar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCerrar->TabIndex = 9;
			this->pbCerrar->TabStop = false;
			this->pbCerrar->Click += gcnew System::EventHandler(this, &FormBatalla::pbCerrar_Click_1);
			// 
			// pbFondo
			// 
			this->pbFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFondo.Image")));
			this->pbFondo->Location = System::Drawing::Point(12, 10);
			this->pbFondo->Name = L"pbFondo";
			this->pbFondo->Size = System::Drawing::Size(107, 57);
			this->pbFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbFondo->TabIndex = 10;
			this->pbFondo->TabStop = false;
			// 
			// FormBatalla
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 512);
			this->Controls->Add(this->pbCerrar);
			this->Controls->Add(this->pTurno);
			this->Controls->Add(this->pInformacion2);
			this->Controls->Add(this->pInformacion1);
			this->Controls->Add(this->pbPokemon2);
			this->Controls->Add(this->pbPokemon1);
			this->Controls->Add(this->pbFondo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormBatalla";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormBatalla";
			this->Load += gcnew System::EventHandler(this, &FormBatalla::FormBatalla_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &FormBatalla::FormBatalla_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormBatalla::FormBatalla_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon2))->EndInit();
			this->pInformacion1->ResumeLayout(false);
			this->pInformacion1->PerformLayout();
			this->pInformacion2->ResumeLayout(false);
			this->pInformacion2->PerformLayout();
			this->pTurno->ResumeLayout(false);
			this->pTurno->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFondo))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void GimnasioAtacar()
		{
			Random r;
			Ataque1 = r.Next(1, 3);

			if (Ataque1 == 1)
			{
				lblAtaque1Valor->Text = "Ataque x1";
				lblAtaque1Valor->ForeColor = Color::Green;
			}
			if (Ataque1 == 2)
			{
				lblAtaque1Valor->Text = "Ataque x2";
				lblAtaque1Valor->ForeColor = Color::Red;
			}

			int danio = ((pokemon->getAtaque() + pokemon->getExperiencia()) / 20)*Ataque1;
			pokemon->setVida(pokemon->getVida() - danio);
		}

		void RetadorAtacar()
		{
			int danio = ((ginmasiopokemon->getAtaque() + ginmasiopokemon->getExperiencia()) / 20)*Ataque2;
			ginmasiopokemon->setVida(ginmasiopokemon->getVida() - danio);

		}

	private: System::Void FormBatalla_Load(System::Object^  sender, System::EventArgs^  e) {

		tick = 0;//timer

		this->pbFondo->Location = System::Drawing::Point(0, 0);
		this->pbFondo->Size = System::Drawing::Size(512, 512);
		this->pbFondo->Visible = true;
		this->pbFondo->Enabled = true;
		this->pbFondo->BringToFront();

		this->pbCerrar->Location = System::Drawing::Point(450, 12);
		this->pbCerrar->Size = System::Drawing::Size(50, 50);
		this->pbCerrar->Parent = pbFondo;
		this->pbCerrar->Visible = true;
		this->pbCerrar->Enabled = true;
		this->pbCerrar->BringToFront();

		this->pTurno->BringToFront();


		Random r;

		Tiempo1 = 3;//se demora 3 segundos para comenzar ,y cuando carga al hacer el ataque x1
		this->pInformacion1->BringToFront();
		ginmasiopokemon = new CPokemon(r.Next(1, 21), 100, r.Next(1, 100), r.Next(1, 100), r.Next(1, 500), r.Next(1, 500));
		this->pbPokemon1->Image = Image::FromFile(ginmasiopokemon->getID().ToString() + ".gif");
		this->pbPokemon1->Parent = pbFondo;
		this->pbPokemon1->BringToFront();
		this->lblTiempo1Valor->Text = Tiempo1.ToString();
		this->lblVida1Valor->Text = ginmasiopokemon->getVida().ToString();
		this->lblAtaque1Valor->Text = "Esperando";


		Tiempo2 = 3;
		this->pInformacion2->BringToFront();
		pokemon = personajepokemones->getArreglo()[pokemonseleccionado];
		this->pbPokemon2->Image = Image::FromFile(pokemon->getID().ToString() + ".gif");
		this->pbPokemon2->Parent = pbFondo;
		this->pbPokemon2->BringToFront();
		this->lblTiempo2Valor->Text = Tiempo2.ToString();
		this->lblVida2Valor->Text = pokemon->getVida().ToString();
		this->lblAtaque2Valor->Text = "Esperando";
	}

	
	private: System::Void pbCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	
	private: System::Void FormBatalla_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) 
	{

	}

	private: System::Void FormBatalla_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		switch (e->KeyCode)
		{
			case Keys::Up:
				if (Tiempo2 == 0)
				{
					Ataque2 = 1;
					lblAtaque2Valor->Text = "Ataque x1";
					lblAtaque2Valor->ForeColor = Color::Green;
				}
				break;
			case Keys::Down:
				if (Tiempo2 == 0)
				{
					Ataque2 = 2;
					lblAtaque2Valor->Text = "Ataque x2";
					lblAtaque2Valor->ForeColor = Color::Red;
				}
				break;
			case Keys::Space:
				if (Tiempo2 == 0)
				{
					if (Ataque2 == 1){
						Tiempo2 = 3;
						lblAtaque2Valor->Text = "Ataque x1";
						lblAtaque2Valor->ForeColor = Color::Green;
					}
					else{
						Tiempo2 = 6;
						lblAtaque2Valor->Text = "Ataque x2";
						lblAtaque2Valor->ForeColor = Color::Red;
					}
					RetadorAtacar();
				}
				break;
		}
	}
	private: System::Void tBatalla_Tick(System::Object^  sender, System::EventArgs^  e) {
		tick++;

		this->lblVida1Valor->Text = ginmasiopokemon->getVida().ToString();
		this->lblVida2Valor->Text = pokemon->getVida().ToString();

		if (ginmasiopokemon->getVida() >=60)//vida mayor o igual al de 60 se pone verde
		{
			this->lblVida1Valor->ForeColor = Color::Green;
		}
		else if (ginmasiopokemon->getVida() >= 30 && ginmasiopokemon->getVida() < 60)//vida menor de 60 se pone verde
		{
			this->lblVida1Valor->ForeColor = Color::Gold;
		}
		else if (ginmasiopokemon->getVida() < 30 && ginmasiopokemon->getVida() > 0)//vida menor de 30 se pone rojo
		{
			this->lblVida1Valor->ForeColor = Color::Red;
		}
		else if (ginmasiopokemon->getVida() <= 0)// llega a 0 se cierra porque muere
		{
			//PERDIO GINMASIO
			tBatalla->Enabled = false;
			MessageBox::Show("Ganaste 2000 monedas y \nobtuviste una medalla");
			personaje->setMonedas(2000);
			personaje->setMedallas(1);
			this->Close();
		}

		if (pokemon->getVida() >= 60)//vida mayor o igual al de 60 se pone verde
		{
			this->lblVida2Valor->ForeColor = Color::Green;
		}
		else if (pokemon->getVida() >= 30 && pokemon->getVida() < 60)//vida menor de 60 se pone verde
		{
			this->lblVida2Valor->ForeColor = Color::Gold;
		}
		else if (pokemon->getVida() < 30 && pokemon->getVida() > 0)//vida menor de 30 se pone rojo
		{
			this->lblVida2Valor->ForeColor = Color::Red;
		}
		else if (pokemon->getVida() <= 0)// llega a 0 se cierra porque muere
		{
			//PERDIO RETADOR
			tBatalla->Enabled = false;
			pokemon->setVida(0);
			MessageBox::Show("Perdiste Vladimir");
			this->Close();
		}
		
		if (tick == 10)
		{
			if (Tiempo1 != 0)
			{
				this->lblTiempo1Valor->Text = Tiempo1.ToString();
				this->lblAtaque1Valor->Text = "Esperando";
				this->lblAtaque1Valor->ForeColor = Color::Black;
				Tiempo1--;
			}
			else
			{
				this->lblTiempo1Valor->Text = "¡Ahora!";

				this->lblAtaque1Valor->Text = "!Ataca!";
				this->lblAtaque1Valor->ForeColor = Color::Red;

				Tiempo1 = 3;
				GimnasioAtacar();
			}


			if (Tiempo2 != 0)
			{
				this->lblTiempo2Valor->Text = Tiempo2.ToString();
				this->lblAtaque2Valor->Text = "Esperando";
				this->lblAtaque2Valor->ForeColor = Color::Black;
				Tiempo2--;
			}
			else
			{
				this->lblTiempo2Valor->Text = "¡Ahora!";

			}

			tick = 0;
		}
	}
private: System::Void pbCerrar_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};
}
