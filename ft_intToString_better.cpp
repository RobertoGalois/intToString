#include    <iostream>
#include    <string>
#include    <sstream>

int     ft_intToString_better(std::string p_str)
{
    std::istringstream      iss(p_str);
    int                     ret(0);

    iss >> ret;
    return (ret);
        
}

int     main(void)
{
    std::cout << (ft_intToString_better("42")) << std::endl;    
    return (0);
}
