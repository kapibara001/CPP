#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

// При работе с приложениями перед основной функцией нужно прописать атрибуты, т.е дополнительная информаиця, которая привязана к определенному методу 


[STAThreadAttribute] // Запускаем функцию в отдальном потоке данных
int main(array<String^>^ args) {
	// Запуск окошка нашего приложения
	Application::SetCompatibleTextRenderingDefault(false); // Данная функция необходима нам для правильной обработки текста
	Application::EnableVisualStyles(); // Подключаем визуальные стили
	project1::MyForm form;
	Application::Run(% form); // Ссылка на form. % потому что есть атрибут ref  в  15 строке myForm.h.
}