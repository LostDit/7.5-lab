#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");
    int length, width;
    std::cout << "Введите высоту и ширину рамки: ";
    std::cin >> length >> width;
    do{
      
            if (length == 0 || width == 0)
            {
                std::cout<<"Вы ввели 0 попробуйте снова\n";
                std::cout << "Введите высоту и ширину рамки: ";
                std::cin >> length >> width;
        
        }else {
    
                std::string mobiusRow = "|", fillerRows = "|";
    
                for (int i = 0; i < width - 2; i++)
                    {
                        mobiusRow += '-';
                         fillerRows += ' ';
                    }
                mobiusRow += "|\n";
                fillerRows += "|\n";
                //std::cout << mobiusRow
                std::string frame = mobiusRow;
                for (int i = 0; i < length - 2; i++)
                    frame += fillerRows;
                    frame += mobiusRow;
                    std::cout << frame;
            }
    
    } while (true);
}