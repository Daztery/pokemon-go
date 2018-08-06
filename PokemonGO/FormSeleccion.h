#pragma once
#include "ArrPokemon.h"
#include "CPokemon.h"
#include "FormParada.h"
#include "FormBatalla.h"
namespace PokemonGO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormSeleccion
	/// </summary>
	public ref class FormSeleccion : public System::Windows::Forms::Form
	{
	public:
		CPersonaje *personaje;//no se inicializa porque ya se inicializó en el form principal "Myform"
	private: System::Windows::Forms::PictureBox^  pbPokemon;
	private: System::Windows::Forms::ListBox^  listPokemonAtrapados;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	public:
		CArrPokemon *personajepokemones;

	public:
		FormSeleccion(void)
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
		~FormSeleccion()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbCerrar;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::Button^  btnPelear;

	private: System::Windows::Forms::Label^  lblAtaque;
	private: System::Windows::Forms::Label^  lblExperiencia;
	private: System::Windows::Forms::Label^  lblVida;








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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormSeleccion::typeid));
			this->pbCerrar = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnPelear = (gcnew System::Windows::Forms::Button());
			this->lblAtaque = (gcnew System::Windows::Forms::Label());
			this->lblExperiencia = (gcnew System::Windows::Forms::Label());
			this->lblVida = (gcnew System::Windows::Forms::Label());
			this->pbPokemon = (gcnew System::Windows::Forms::PictureBox());
			this->listPokemonAtrapados = (gcnew System::Windows::Forms::ListBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pbCerrar
			// 
			this->pbCerrar->BackColor = System::Drawing::Color::Transparent;
			this->pbCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCerrar.Image")));
			this->pbCerrar->Location = System::Drawing::Point(450, 12);
			this->pbCerrar->Name = L"pbCerrar";
			this->pbCerrar->Size = System::Drawing::Size(50, 50);
			this->pbCerrar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCerrar->TabIndex = 2;
			this->pbCerrar->TabStop = false;
			this->pbCerrar->Click += gcnew System::EventHandler(this, &FormSeleccion::pbCerrar_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(386, 181);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(0, 0);
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(280, 85);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(0, 0);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// btnPelear
			// 
			this->btnPelear->BackColor = System::Drawing::Color::Black;
			this->btnPelear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnPelear->Font = (gcnew System::Drawing::Font(L"Candara", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPelear->ForeColor = System::Drawing::Color::Gold;
			this->btnPelear->Location = System::Drawing::Point(331, 418);
			this->btnPelear->Name = L"btnPelear";
			this->btnPelear->Size = System::Drawing::Size(102, 36);
			this->btnPelear->TabIndex = 8;
			this->btnPelear->Text = L"¡Pelear!";
			this->btnPelear->UseVisualStyleBackColor = false;
			this->btnPelear->Click += gcnew System::EventHandler(this, &FormSeleccion::btnPelear_Click);
			// 
			// lblAtaque
			// 
			this->lblAtaque->AutoSize = true;
			this->lblAtaque->BackColor = System::Drawing::Color::Transparent;
			this->lblAtaque->Font = (gcnew System::Drawing::Font(L"Candara", 12));
			this->lblAtaque->Location = System::Drawing::Point(265, 362);
			this->lblAtaque->Name = L"lblAtaque";
			this->lblAtaque->Size = System::Drawing::Size(59, 19);
			this->lblAtaque->TabIndex = 12;
			this->lblAtaque->Text = L"Ataque";
			// 
			// lblExperiencia
			// 
			this->lblExperiencia->AutoSize = true;
			this->lblExperiencia->BackColor = System::Drawing::Color::Transparent;
			this->lblExperiencia->Font = (gcnew System::Drawing::Font(L"Candara", 12));
			this->lblExperiencia->Location = System::Drawing::Point(265, 337);
			this->lblExperiencia->Name = L"lblExperiencia";
			this->lblExperiencia->Size = System::Drawing::Size(93, 19);
			this->lblExperiencia->TabIndex = 11;
			this->lblExperiencia->Text = L"Experiencia: ";
			// 
			// lblVida
			// 
			this->lblVida->AutoSize = true;
			this->lblVida->BackColor = System::Drawing::Color::Transparent;
			this->lblVida->Font = (gcnew System::Drawing::Font(L"Candara", 12));
			this->lblVida->Location = System::Drawing::Point(265, 312);
			this->lblVida->Name = L"lblVida";
			this->lblVida->Size = System::Drawing::Size(42, 19);
			this->lblVida->TabIndex = 10;
			this->lblVida->Text = L"Vida:";
			// 
			// pbPokemon
			// 
			this->pbPokemon->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon->Location = System::Drawing::Point(269, 79);
			this->pbPokemon->Name = L"pbPokemon";
			this->pbPokemon->Size = System::Drawing::Size(200, 200);
			this->pbPokemon->TabIndex = 13;
			this->pbPokemon->TabStop = false;
			// 
			// listPokemonAtrapados
			// 
			this->listPokemonAtrapados->FormattingEnabled = true;
			this->listPokemonAtrapados->Location = System::Drawing::Point(0, 79);
			this->listPokemonAtrapados->Name = L"listPokemonAtrapados";
			this->listPokemonAtrapados->Size = System::Drawing::Size(212, 433);
			this->listPokemonAtrapados->TabIndex = 14;
			this->listPokemonAtrapados->SelectedIndexChanged += gcnew System::EventHandler(this, &FormSeleccion::listPokemonAtrapados_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(512, 512);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// FormSeleccion
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 512);
			this->Controls->Add(this->listPokemonAtrapados);
			this->Controls->Add(this->pbPokemon);
			this->Controls->Add(this->lblAtaque);
			this->Controls->Add(this->lblExperiencia);
			this->Controls->Add(this->lblVida);
			this->Controls->Add(this->btnPelear);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pbCerrar);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"FormSeleccion";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormSeleccion";
			this->Load += gcnew System::EventHandler(this, &FormSeleccion::FormSeleccion_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormSeleccion_Load(System::Object^  sender, System::EventArgs^  e) {

		listPokemonAtrapados->Items->Clear();
		for (int i = 0; i < personajepokemones->getArreglo().size(); i++)
		{
			int id = personajepokemones->getArreglo()[i]->getID();
			listPokemonAtrapados->Items->Add(id);
		}

		lblVida->Parent = pictureBox1;
		lblExperiencia->Parent = pictureBox1;
		lblAtaque->Parent = pictureBox1;

		pbCerrar->Parent = pictureBox1;
	}
	private: System::Void pbCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void btnPelear_Click(System::Object^  sender, System::EventArgs^  e) {

		if (personajepokemones->getArreglo().size() <= 0)
		{
			MessageBox::Show("Para una pelea pokemon debes haber capturado al menos uno");
			return;
		}
		else
		{
			if (listPokemonAtrapados->SelectedIndex >= 0)
			{
				this->Close();

				FormBatalla ^frmBatalla = gcnew FormBatalla();
				frmBatalla->personaje = personaje;//todos los datos de personaje se pasan al form batalla
				frmBatalla->personajepokemones = personajepokemones;
				frmBatalla->pokemonseleccionado = listPokemonAtrapados->SelectedIndex;
				frmBatalla->ShowDialog();
			}
		}
	}
	private: System::Void listPokemonAtrapados_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

		if (listPokemonAtrapados->SelectedIndex >= 0)
		{
			CPokemon *pokemon = personajepokemones->getArreglo()[listPokemonAtrapados->SelectedIndex];

			this->pbPokemon->Image = Image::FromFile(pokemon->getID().ToString() + ".gif");
			this->pbPokemon->BackColor = Color::Transparent;
			this->pbPokemon->Parent = pictureBox1;
			this->pbPokemon->Visible = true;
			this->pbPokemon->Enabled = true;
			this->pbPokemon->BringToFront();


			lblVida->Text = "Vida: " + pokemon->getVida().ToString();
			lblExperiencia->Text = "Experiencia: " + pokemon->getExperiencia().ToString();
			lblAtaque->Text = "Ataque: " + pokemon->getAtaque().ToString();
		}
	}
};
}
