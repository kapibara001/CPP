#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

// ��� ������ � ������������ ����� �������� �������� ����� ��������� ��������, �.� �������������� ����������, ������� ��������� � ������������� ������ 


[STAThreadAttribute] // ��������� ������� � ��������� ������ ������
int main(array<String^>^ args) {
	// ������ ������ ������ ����������
	Application::SetCompatibleTextRenderingDefault(false); // ������ ������� ���������� ��� ��� ���������� ��������� ������
	Application::EnableVisualStyles(); // ���������� ���������� �����
	project1::MyForm form;
	Application::Run(% form); // ������ �� form. % ������ ��� ���� ������� ref  �  15 ������ myForm.h.
}