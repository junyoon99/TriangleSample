#include "TriangleSample.h"

// Direct3D
// 1. ����̽� ���� (����̽� ���ؽ�Ʈ ����)
// 2. ����ü�� ����
// 3. ����Ÿ������ �ĸ� ���� ����
// 4. ���̹��� + ���ٽǹ��� ����
// 5. ���������� ����
// 6. ����Ʈ ���� View port

// 7. �׸���
	// ����Ÿ��
	// ���̽��ٽ� ����

// ��� ����ġ ��
// 0. �ػ󵵴� �ɼ����� ���� - ����
// 0. ������ ���� ĥ�ϱ� ������ ����
// 1. ����ü���� �Ӽ� ����
// 2. ���� ����ÿ� �ݵ�� ��üȭ�� ��� ���� �� ����

// ���� �ػ�
// ����ü��
// ����Ÿ��
// ���̽��ٽ�
// ����Ʈ

// ������ â ũ�� ���� �޽���
// WM_SIZE, WM_ENTERSIZEMOVE, WM_EXITSIZEMOVE
// ũ�� ���� ����, �޴� ���� ����� ����


int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd) 
{

	TriangleSample mySample;
	mySample.Initialize(hInstance);

	mySample.GameLoop();

	mySample.Destroy();

	return 0;
}
