#pragma once


class STRING
{

private:
	static int count_Inter;
	char* _text;

public:

	// ������������
	STRING();
	STRING(int _stringLen);
	STRING(const char* _TextFromUser);
	
	// ����������
	~STRING();

	//Set'���
	void setText(const char* _text);

	//Get'���
	const char* getStr() { return _text; };
	static int getCount() { return count_Inter; }

	// ������� ������
	void EnteringUserString();
	void EnteringUserString80();  // ������������ ��� ������ ������� ������������ ������� 80 ��������
};