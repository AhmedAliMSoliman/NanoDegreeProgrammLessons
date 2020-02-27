#include <iostream>
#include <memory>

class MYCALSS
{
private:
    std::string _private_text_variable;
public: 
    MYCALSS() {}
    MYCALSS(std::string text) { _private_text_variable = text ; }
    ~MYCALSS() { std::cout << _private_text_variable << ",,  get destryed! " << std::endl; }

    void Setter(std::string text) { _private_text_variable = text ; }
};

int main()
{
    //Create unique pointer to proprietary class
    std::unique_ptr<MYCALSS> mycalss_1(new MYCALSS());
    std::unique_ptr<MYCALSS> mycalss_2(new MYCALSS("some text using the 2nd constructor"));

    mycalss_1->Setter("myclass_1 , text using the setter function");
    mycalss_2->Setter("myclass_2 , text using the setter function");

    *mycalss_1 = *mycalss_2;


    std::cout << mycalss_1.get() << " and the second " << mycalss_2.get() << std::endl;
}