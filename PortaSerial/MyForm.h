#pragma once

namespace PortaSerial {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ tbPorta;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::CheckBox^ cbLedLigado;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbAnguloMotor;
	private: System::Windows::Forms::Button^ btEnviarComando;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ rtbComandosEnviado;
	private: System::IO::Ports::SerialPort^ portaSerial;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbPorta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->cbLedLigado = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbAnguloMotor = (gcnew System::Windows::Forms::TextBox());
			this->btEnviarComando = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rtbComandosEnviado = (gcnew System::Windows::Forms::RichTextBox());
			this->portaSerial = (gcnew System::IO::Ports::SerialPort(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Porta de Comunicação";
			// 
			// tbPorta
			// 
			this->tbPorta->Location = System::Drawing::Point(16, 30);
			this->tbPorta->Name = L"tbPorta";
			this->tbPorta->Size = System::Drawing::Size(100, 20);
			this->tbPorta->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(134, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Estado do Led";
			// 
			// cbLedLigado
			// 
			this->cbLedLigado->AutoSize = true;
			this->cbLedLigado->Location = System::Drawing::Point(137, 32);
			this->cbLedLigado->Name = L"cbLedLigado";
			this->cbLedLigado->Size = System::Drawing::Size(58, 17);
			this->cbLedLigado->TabIndex = 3;
			this->cbLedLigado->Text = L"Ligado";
			this->cbLedLigado->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(216, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ângulo do Motor";
			// 
			// tbAnguloMotor
			// 
			this->tbAnguloMotor->Location = System::Drawing::Point(219, 30);
			this->tbAnguloMotor->Name = L"tbAnguloMotor";
			this->tbAnguloMotor->Size = System::Drawing::Size(100, 20);
			this->tbAnguloMotor->TabIndex = 5;
			// 
			// btEnviarComando
			// 
			this->btEnviarComando->Location = System::Drawing::Point(340, 22);
			this->btEnviarComando->Name = L"btEnviarComando";
			this->btEnviarComando->Size = System::Drawing::Size(75, 23);
			this->btEnviarComando->TabIndex = 6;
			this->btEnviarComando->Text = L"Enviar";
			this->btEnviarComando->UseVisualStyleBackColor = true;
			this->btEnviarComando->Click += gcnew System::EventHandler(this, &MyForm::btEnviarComando_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 76);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Comandos Enviados";
			// 
			// rtbComandosEnviado
			// 
			this->rtbComandosEnviado->Location = System::Drawing::Point(16, 93);
			this->rtbComandosEnviado->Name = L"rtbComandosEnviado";
			this->rtbComandosEnviado->Size = System::Drawing::Size(399, 96);
			this->rtbComandosEnviado->TabIndex = 8;
			this->rtbComandosEnviado->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 212);
			this->Controls->Add(this->rtbComandosEnviado);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btEnviarComando);
			this->Controls->Add(this->tbAnguloMotor);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->cbLedLigado);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbPorta);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Mensagem via Serial";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btEnviarComando_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ comando = gcnew String("");

		// Configurando e abrindo porta
		portaSerial->PortName = tbPorta->Text;
		portaSerial->Open();

		// Enviando comando Led
		if (cbLedLigado->Checked == true) {
			comando = "LED L";
		}
		else {
			comando = "LED D";
		}
		portaSerial->WriteLine(comando);
		rtbComandosEnviado->AppendText(comando);
		rtbComandosEnviado->AppendText("\n");

		System::Threading::Thread::Sleep(500);

		// Enviando comando Servo
		comando = "SERVO " + tbAnguloMotor->Text;
		portaSerial->WriteLine(comando);
		rtbComandosEnviado->AppendText(comando);
		rtbComandosEnviado->AppendText("\n");

		// Fechando a Porta
		portaSerial->Close();
	}
};
}
/* Codigo arduino
#include <Servo.h>
#define LED 13
#define SERVO 9

Servo servoMotor;
String comando = ""; // string para os comandos recebidos
boolean comandoCompleto = false; // indica quando um comando foi completamente recebido

void setup() {
	Serial.begin(9600);
	comando.reserve(200);
	pinMode(LED, OUTPUT);
	servoMotor.attach(SERVO);
}

void loop() {
	// quando um comando completo chegou, interpreta
	if (comandoCompleto) {
		interpretaComando();
		// limpa a string do comando interpretado
		comando = "";
		comandoCompleto = false;
	}
	delay(50);
}

//evento que é invocado quando dados chegam pela serial
void serialEvent() {
	while (Serial.available()) {
		// pega byte do buffer
		char caracter = (char)Serial.read();
		// se o caracter é uma quebra de linha, indica a flag comandoCompleto
		//para que o comando seja processado
		if (caracter == '\n') {
			comandoCompleto = true;
		}
		else{
			// adiciona caracter ao comando
			comando += caracter;
		}
	}
}

void interpretaComando(){
	String parte1, parte2;
	parte1 = comando.substring(0, comando.indexOf(' '));
	parte2 = comando.substring(comando.indexOf(' ') + 1);
	// COMANDO LED
	if (parte1.equals("LED")){
		if (parte2.equals("L")){
			digitalWrite(LED, HIGH);
		}
		else if (parte2.equals("D")){
			digitalWrite(LED, LOW);
		}
	}
	// COMANDO SERVO
	else if (parte1.equals("SERVO")){
		int angulo = parte2.toInt();
		servoMotor.write(angulo);
	}
}
*/
