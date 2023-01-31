#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string copy;
    std::string str;
    
    if (ac != 4)
        std::cerr<<"Error: Invalid argc"<<std::endl;
    else
    {
        std::ifstream ifs(av[1]);
        if (!ifs.is_open())
        {
            std::cerr << "Error: No Exist File"<<std::endl;
            return (false);
        }
        while (!ifs.eof())  // 파일의 끝: TRUE
        {
            if (getline(ifs, copy))
                str += copy + "\n";
        }
        ifs.close();
        
        std::ofstream ofs(std::string(av[1]) + ".replace");
        if (!ofs.is_open())
        {
            std::cerr << "Error: Failed to Create File"<<std::endl;
            return (false);
        }
        else
            std::cout<<"Make <File>.replace ....." <<std::endl<<std::endl;
        std::cout<<"File's 'str' size(length): " <<str.length()<<std::endl<<std::endl;
        int checker = 0;
        for(size_t i = 0; i < str.length(); i++)
        {
            size_t pos = str.find(av[2], i);  // i번째 위치부터 av[2]탐색
            if (pos == i)        // pos는 찾은 위치를 반환 -> i부터 찾았으니까 찾았다면 pos와 i가 같음
            {
                i += std::string(av[2]).length() - 1;
                ofs<<av[3];
                checker = 1;
            }
            else
                ofs<<str[i];
        }
        if (checker == 0)
            std::cout<<"Failed to Match: File's hasn't changed"<<std::endl;
        else
            std::cout<<"Successed to Match"<<std::endl;
        ofs.close();
    }
    return 0;
}