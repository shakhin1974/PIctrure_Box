#include "MyForm.h"
#include <Windows.h>
using namespace Project3; // �������� ������� � �������� namespace (����������) ������ ���� �����������; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

}



