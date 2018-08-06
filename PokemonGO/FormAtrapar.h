#pragma once
#include "CPokemon.h"
#include "CMapa.h"
#include "Mochila.h"
#include "Pokebola.h"
#include "Cuadrado.h"
namespace PokemonGO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormAtrapar
	/// </summary>
	public ref class FormAtrapar : public System::Windows::Forms::Form
	{
	public:
		CPersonaje *personaje;
		CPokebola *pokebola = new CPokebola(220, 400);
		CCuadrado *cuadrado = new CCuadrado(200, 180);
		CMapa *mapa = new CMapa;
		/*bool holded;*/
		bool clicked;
		int x=211;
		int y=200;

		int time = 0;


	private: System::Windows::Forms::PictureBox^  pbPokemon;
	private: System::Windows::Forms::Panel^  panelCanvas;

	public:
		CPokemon *pokemon;
		CArrPokemon *personajepokemones;
		FormAtrapar(void)
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
		~FormAtrapar()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pbCerrar;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::ComponentModel::IContainer^  components;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormAtrapar::typeid));
			this->pbCerrar = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pbPokemon = (gcnew System::Windows::Forms::PictureBox());
			this->panelCanvas = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->BeginInit();
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
			this->pbCerrar->TabIndex = 1;
			this->pbCerrar->TabStop = false;
			this->pbCerrar->Click += gcnew System::EventHandler(this, &FormAtrapar::pbCerrar_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &FormAtrapar::timer1_Tick);
			// 
			// pbPokemon
			// 
			this->pbPokemon->BackColor = System::Drawing::Color::Transparent;
			this->pbPokemon->Location = System::Drawing::Point(12, 108);
			this->pbPokemon->Name = L"pbPokemon";
			this->pbPokemon->Size = System::Drawing::Size(107, 64);
			this->pbPokemon->TabIndex = 0;
			this->pbPokemon->TabStop = false;
			this->pbPokemon->Visible = false;
			// 
			// panelCanvas
			// 
			this->panelCanvas->BackColor = System::Drawing::Color::Transparent;
			this->panelCanvas->Location = System::Drawing::Point(12, 12);
			this->panelCanvas->Name = L"panelCanvas";
			this->panelCanvas->Size = System::Drawing::Size(107, 73);
			this->panelCanvas->TabIndex = 0;
			this->panelCanvas->Click += gcnew System::EventHandler(this, &FormAtrapar::panelCanvas_Click_1);
			// 
			// FormAtrapar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(514, 512);
			this->Controls->Add(this->panelCanvas);
			this->Controls->Add(this->pbPokemon);
			this->Controls->Add(this->pbCerrar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAtrapar";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"00";
			this->Load += gcnew System::EventHandler(this, &FormAtrapar::FormAtrapar_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbCerrar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPokemon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FormAtrapar_Load(System::Object^  sender, System::EventArgs^  e) {

		this->panelCanvas->Location = System::Drawing::Point(0, 0);
		this->panelCanvas->Parent = this;
		this->panelCanvas->Size = System::Drawing::Size(512, 512);
		this->panelCanvas->BringToFront();

		
		this->pbCerrar->Location = System::Drawing::Point(450, 12);
		this->pbCerrar->Size = System::Drawing::Size(50, 50);
		this->pbCerrar->Parent = this;
		this->pbCerrar->Visible = true;
		this->pbCerrar->Enabled = true;
		this->pbCerrar->BringToFront();


		this->pbPokemon->Image = Image::FromFile(pokemon->getID().ToString() + ".gif");
		this->pbPokemon->Location = System::Drawing::Point(211, 200);
		this->pbPokemon->Size = System::Drawing::Size(90, 90);
		this->pbPokemon->Parent = panelCanvas;
		this->pbPokemon->BackColor = Color::Transparent;
		this->pbPokemon->Visible = true;
		this->pbPokemon->Enabled = true;
		this->pbPokemon->BringToFront();

		/*holded = false;*/
		clicked = false;
		
	}
	private: System::Void pbCerrar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
		
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		Graphics ^g = panelCanvas->CreateGraphics();//se hace el canvas con el panel porque en el fondo no se puede poner el gift
		int cWidth = (int)g->VisibleClipBounds.Width;
		int cHeight = (int)g->VisibleClipBounds.Height;
		BufferedGraphicsContext ^espacio = BufferedGraphicsManager::Current;
		espacio->MaximumBuffer = System::Drawing::Size(cWidth + 1, cHeight + 1);
		BufferedGraphics ^buffer = espacio->Allocate(g, Drawing::Rectangle(0, 0, cWidth, cHeight));
		buffer->Graphics->Clear(System::Drawing::Color::FromArgb(1, 1, 1));

		//buffer->Graphics->DrawLine(Pens::Black, 0, panelCanvas->ClientRectangle.Height / 2, panelCanvas->ClientRectangle.Width, this->ClientRectangle.Height / 2);

		Bitmap ^bmpMapa = gcnew Bitmap("FondoAtraparPok.png");
		mapa->dibujar(buffer, bmpMapa);

		Bitmap ^bmpPokebola = gcnew Bitmap("ball-poke.png");
		if (personaje->getPokebolas() > 0)
		{
			pokebola->dibujar(buffer, bmpPokebola);
		}

		Bitmap ^bmpCuadrado = gcnew Bitmap("prueba.jpg");

		if (time == 6)
		{
			Random r;
			int dx = r.Next(50, 400);
			cuadrado->dibujarPorPosicion(buffer, bmpCuadrado, dx, 180);
			this->pbPokemon->Location = System::Drawing::Point(dx, 200);
			time = 0;
		}
		time++;

		if (clicked)
		{
			pokebola->Mover();
			if (pokebola->getY() < -30)
			{
				personaje->setPokebolas(-1);
				clicked = false;
				pokebola->sety(400);
			}
		}
		
		if (pokebola->getPosicion().IntersectsWith(cuadrado->getPosicion()))//interceptar la pokebola con el pokemon
		{

			personaje->setPokebolas(-1);
			clicked = false;
			timer1->Enabled = false;
			MessageBox::Show("!Pokemon Atrapado!\nObtuviste 1 caramelo");
			personajepokemones->registrar(pokemon);
			personaje->setCaremelos(1);
			this->Close();
			
		}


		buffer->Render(g);
		
		delete buffer, espacio, g,bmpMapa,bmpPokebola,bmpCuadrado;
	}

	
private: System::Void panelCanvas_Click_1(System::Object^  sender, System::EventArgs^  e) {
	clicked = true;
}
};
}
