#pragma comment(linker, "/opt:nowin98")
#include <windows.h>
int WINAPI WinMain(HINSTANCE hinst,HINSTANCE hPreInst,
                   LPSTR pCmdLine,int nCmdShow)
{
	TCHAR str[256];//MAX_COMPUTERNAME_LENGTH+1�ȏ�ɂ��Ă�������
	DWORD n=256;
	GetComputerName(str,&n);
	MessageBox(NULL,str,TEXT("�R���s���[�^��"),MB_OK);
	return 0;
}
