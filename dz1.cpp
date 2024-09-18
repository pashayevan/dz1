#include<iostream>
#include<vector>
#include<string>

std::string findpref(std::vector<std::string>strings)
{
    std::string begining = strings[0];
    int value = strings[0].size();
    for(std::string elm:strings)
{
    while(!elm.starts_with(begining)&& value > 0)
    {
        value--;
        begining = strings[0].substr(0,value);
    }
}
return begining;
}

int main()
{
    std::string phrase;
    std::vector<std::string>strings;
    while(std::cin>>phrase)
    {
        strings.push_back(phrase);
    }
    std::cout<<findpref(strings);
    return 0;
}
