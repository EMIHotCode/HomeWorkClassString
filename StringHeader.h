#pragma once


class STRING
{

private:
	static int count_Inter;
	char* _text;

public:

	// конструкторы
	STRING();
	STRING(int _stringLen);
	STRING(const char* _TextFromUser);
	
	// деструктор
	~STRING();

	//Set'эры
	void setText(const char* _text);

	//Get'эры
	const char* getStr() { return _text; };
	static int getCount() { return count_Inter; }

	// Обычные методы
	void EnteringUserString();
	void EnteringUserString80();  // используется при вызове пустого конструктора длинной 80 символов
};