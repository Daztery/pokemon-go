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
	/// Summary for FormParada
	/// </summary>
	public ref class FormParada : public System::Windows::Forms::Form
	{
	public:

		CPersonaje *personaje;
		CArrPokemon *personajepokemones;
		int pokebolas;
		int pociones;
		int revivir;
		int huevo;

		FormParada(void)
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
		~FormParada()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  lblPociones;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Label^  lblRevivir;
	private: System::Windows::Forms::PictureBox^  pbFondo;
	private: System::Windows::Forms::PictureBox^  pbCerrar;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  lblPokebolas;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormParada::typeid));
			this->pbFondo = (gcnew System::Windows::Forms::PictureBox());
			this->pbCerrar = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->lblRevivir = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPociones = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->lblPokebolas = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFondo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pbFondo
			// 
			this->pbFondo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbFondo.Image")));
			this->pbFondo->Location = System::Drawing::Point(0, -1);
			this->pbFondo->Name = L"pbFondo";
			this->pbFondo->Size = System::Drawing::Size(512, 420);
			this->pbFondo->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbFondo->TabIndex = 11;
			this->pbFondo->TabStop = false;
			// 
			// pbCerrar
			// 
			this->pbCerrar->BackColor = System::Drawing::Color::Transparent;
			this->pbCerrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbCerrar.Image")));
			this->pbCerrar->Location = System::Drawing::Point(450, 12);
			this->pbCerrar->Name = L"pbCerrar";
			this->pbCerrar->Size = System::Drawing::Size(50, 50);
			this->pbCerrar->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbCerrar->TabIndex = 12;
			this->pbCerrar->TabStop = false;
			this->pbCerrar->Click += gcnew System::EventHandler(this, &FormParada::pbCerrar_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->lblRevivir);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->lblPociones);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->lblPokebolas);
			this->panel1->Location = System::Drawing::Point(0, 425);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(512, 90);
			this->panel1->TabIndex = 13;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(353, 19);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// lblRevivir
			// 
			this->lblRevivir->AutoSize = true;
			this->lblRevivir->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblRevivir->Location = System::Drawing::Point(409, 33);
			this->lblRevivir->Name = L"lblRevivir";
			this->lblRevivir->Size = System::Drawing::Size(30, 23);
			this->lblRevivir->TabIndex = 10;
			this->lblRevivir->Text = L"x0";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(182, 19);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 9;
			this->pictureBox2->TabStop = false;
			// 
			// lblPociones
			// 
			this->lblPociones->AutoSize = true;
			this->lblPociones->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPociones->Location = System::Drawing::Point(238, 33);
			this->lblPociones->Name = L"lblPociones";
			this->lblPociones->Size = System::Drawing::Size(30, 23);
			this->lblPociones->TabIndex = 8;
			this->lblPociones->Text = L"x0";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 19);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// lblPokebolas
			// 
			this->lblPokebolas->AutoSize = true;
			this->lblPokebolas->Font = (gcnew System::Drawing::Font(L"Candara", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPokebolas->Location = System::Drawing::Point(68, 33);
			this->lblPokebolas->Name = L"lblPokebolas";
			this->lblPokebolas->Size = System::Drawing::Size(30, 23);
			this->lblPokebolas->TabIndex = 6;
			this->lblPokebolas->Text = L"x0";
			// 
			// FormParada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(512, 512);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pbCerrar);
			this->Controls->Add(this->pbFondo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormParada";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormParada";
			this->Load += gcnew System::EventHandler(this, &FormParada::FormParada_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbFondo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormParada_Load(System::Object^  sender, System::EventArgs^  e) {
		
		this->pbCerrar->Location = System::Drawing::Point(450, 12);
		this->pbCerrar->Size = System::Drawing::Size(50, 50);
		this->pbCerrar->Parent = pbFondo;
		this->pbCerrar->Visible = true;
		this->pbCerrar->Enabled = true;
		this->pbCerrar->BringToFront();
		

		pokebolas = 0;
		pociones = 0;
		revivir = 0;
		huevo = 0;

		Random r;

		for (int i = 0; i < r.Next(1, 8); i++)
		{
			PictureBox ^ picture1 = gcnew PictureBox();
			picture1->Image = Image::FromFile("Pokebola.png");
			picture1->SizeMode = PictureBoxSizeMode::StretchImage;
			picture1->BackColor = Color::Transparent;
			picture1->Parent = pbFondo;
			picture1->Size = System::Drawing::Size(50, 50);
			picture1->Location = System::Drawing::Point(r.Next(1, 512 - 60), r.Next(1, 420 - 60));
			picture1->Click += gcnew System::EventHandler(this, &FormParada::miClick);//componente dinamico
			picture1->BringToFront();
		}
		for (int i = 0; i < r.Next(0, 6); i++)
		{
			PictureBox ^ picture2 = gcnew PictureBox();
			picture2->Image = Image::FromFile("Pocion.png");
			picture2->SizeMode = PictureBoxSizeMode::StretchImage;
			picture2->BackColor = Color::Transparent;
			picture2->Parent = pbFondo;
			picture2->Size = System::Drawing::Size(50, 50);
			picture2->Location = System::Drawing::Point(r.Next(1, 480 - 60), r.Next(1, 400 - 60));
			picture2->Click += gcnew System::EventHandler(this, &FormParada::miClick2);
			picture2->BringToFront();
		}
		for (int i = 0; i < r.Next(0, 3); i++)
		{
			PictureBox ^ picture3 = gcnew PictureBox();
			picture3->Image = Image::FromFile("Revivir.png");
			picture3->SizeMode = PictureBoxSizeMode::StretchImage;
			picture3->BackColor = Color::Transparent;
			picture3->Parent = pbFondo;
			picture3->Size = System::Drawing::Size(50, 50);
			picture3->Location = System::Drawing::Point(r.Next(1, 500 - 60), r.Next(1, 390 - 60));
			picture3->Click += gcnew System::EventHandler(this, &FormParada::miClick3);
			picture3->BringToFront();
		}
		for (int i = 0; i < r.Next(0, 2); i++)
		{
			PictureBox ^ picture4 = gcnew PictureBox();
			picture4->Image = Image::FromFile("Huevo.jpg");
			picture4->SizeMode = PictureBoxSizeMode::StretchImage;
			picture4->BackColor = Color::Transparent;
			picture4->Parent = pbFondo;
			picture4->Size = System::Drawing::Size(50, 50);
			picture4->Location = System::Drawing::Point(r.Next(1, 400 - 60), r.Next(1, 380 - 60));
			picture4->Click += gcnew System::EventHandler(this, &FormParada::miClick4);
			picture4->BringToFront();
		}

	}
	private: System::Void pbCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	private: System::Void miClick(System::Object^  sender, System::EventArgs^  e)
	{
		PictureBox ^picture1 = (PictureBox ^)sender;
		picture1->Visible = false;
		pokebolas++;
		personaje->setPokebolas(1);
		this->lblPokebolas->Text = "x" + pokebolas.ToString();
		
	}
	private: System::Void miClick2(System::Object^  sender, System::EventArgs^  e)
	{

		PictureBox ^picture2 = (PictureBox ^)sender;
		picture2->Visible = false;
		pociones++;
		personaje->setPociones(1);
		this->lblPociones->Text = "x" + pociones.ToString();
		

	}
	private: System::Void miClick3(System::Object^  sender, System::EventArgs^  e)
	{
		PictureBox ^picture3 = (PictureBox ^)sender;
		picture3->Visible = false;
		revivir++;
		personaje->setRevivir(1);
		this->lblRevivir->Text = "x" + revivir.ToString();
		
	}
	private: System::Void miClick4(System::Object^  sender, System::EventArgs^  e)
	{
		 PictureBox ^picture4 = (PictureBox ^)sender;
		 picture4->Visible = false;
		 huevo++;
		 personaje->setHuevo(1);

	 }
};
}
