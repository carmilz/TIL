//p452-Part04-Chapter11-문제2
#include <iostream>
#include <string>

class Book
{
private:
	std::string title;
	std::string isbn;
	int price;
public:
	Book(std::string _title, std::string _isbn, int _price) : title(_title), isbn(_isbn), price(_price) { }
	void ShowBookInfo()
	{
		std::cout << "제목: " << title << std::endl;
		std::cout << "ISBN: " << isbn << std::endl;
		std::cout << "가격: " << price << std::endl;
	}
};

class EBook : public Book
{
private:
	std::string DRMKey;
public:
	EBook(std::string _title, std::string _isbn, int _price, std::string _DRMKey) : Book(_title, _isbn, _price), DRMKey(_DRMKey) { }
	void ShowEBookInfo()
	{
		ShowBookInfo();
		std::cout << "인증키: " << DRMKey << std::endl;
	}
};

int main()
{
	Book book("좋은 C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	std::cout << std::endl;
	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	return 0;
}
