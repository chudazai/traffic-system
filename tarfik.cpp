#include <iostream>
int main(){
	int hiz;
	char tur;
	
    std::cout<<"Arac�n turunu giriniz:";
    std::cout<<std::endl;
    std::cout<<"(otomobil:o,otobus:t,kamyonet: k)";
    std::cin>>tur;
    std::cout<<"Aracin hizini giriniz:";
    std::cin>>hiz;
    
    if(tur=='o'){
    	std::cout<<"Arac otomobildir";
    	std::cout<<std::endl;
    	if(hiz>82)
    	std::cout<<"Arac cezalidir";
    	else
    	std::cout<<"Kurallara uygun";
    	
	}
	
	else if (tur =='t'){
		
	std::cout	<<"Arac otobustur";
	std::cout<<std::endl;
		if(hiz>70)
		std::cout<<"Arac cezal�d�r";
		else
		std::cout<<"Kurallara uygun";
		
	}
	else if (tur=='k'){
		std::cout<<"arac kamyonettir";
		std::cout<<std::endl;
		if(hiz>50)
		std::cout<<"kurallara uygun";
		
	}
	else
	std::cout<<"arac turunu yanl�s girdiniz";
	return 0;
}
