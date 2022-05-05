#include<iostream>
using namespace std;


int main()
{
	int Quant;
	int Choice;

	//Quantity
	int QRooms = 0, QPasta = 0, QNoodles = 0, QShakes = 0, QChicken = 0, QBurger = 0;
	//Food Items Sold
	int SRooms = 0, SPasta = 0, SNoodles = 0, SShakes = 0, SChicken = 0, SBurger = 0;
	//Total prose of items
	int Total_Rooms = 0, Total_Pasta = 0, Total_Noodles = 0, Total_Shakes = 0, Total_Chicken = 0, Total_Burger = 0;

	cout << "\n\t Quantity of items we have : ";
	cout << "\n Rooms Avalible: ";
	cin >> QRooms;

	cout << "\n Quantity of Pasta : ";
	cin >> QPasta;

	cout << "\n Quantity of Noodles ; ";
	cin >> QNoodles;

	cout << "\n Quantity of Shakes : ";
	cin >> QShakes;

	cout << "\n Quantity of Chicken-Roll : ";
	cin >> QChicken;

	cout << "\n Quantity of burger : ";
	cin >> QBurger;

	//Selection Menue --->
	m:
	cout << "\n\t\t\t Please Selecte from the given options ----->";

	cout << "\n\n 1) Rooms";
	cout << "\n\n 2) Pasta";
	cout << "\n\n 3) Noodles";
	cout << "\n\n 4) Shakes";
	cout << "\n\n 5) Chicken-Roll";
	cout << "\n\n 6) Burger";
	cout <<"\n 7) Information regarding salesand collection";
	cout << "\n 8) Exit";

	cout << "\n\n\n\n<------------Please Enter your Choice------------>";
	cin >> Choice;

	switch (Choice)
	{
	case 1:
		cout << "Enter the number of rooms you want : ";
		cin >> Quant;
		if (QRooms - SRooms >= Quant)
		{
			SRooms = SRooms + Quant;
			Total_Rooms = Total_Rooms + Quant * 1200;
			cout << "\n\n\t\t" << Quant << " These many rooms have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QRooms - SRooms << " Remaining in Hotel";
		}
		break;
	case 2:
		cout << "Enter Pasta Quantity you want : ";
		cin >> Quant;
		if (QPasta - SPasta >= Quant)
		{
			SPasta = SPasta + QPasta;
			Total_Pasta = Total_Pasta + Quant * 250;
			cout << "\n\n\t\t" << Quant << " These many Pasta have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QPasta - SPasta << " Remaining in Hotel";
		}
		break;

	case 3:
		cout << "Enter Noodles Quantity you want : ";
		cin >> Quant;
		if (QNoodles - SNoodles >= Quant)
		{
			SNoodles = SNoodles + QNoodles;
			Total_Noodles = Total_Noodles + Quant * 120;
			cout << "\n\n\t\t" << Quant << " These many Noodles have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QNoodles - SNoodles << " Remaining in Hotel";
		}
		break;

	case 4:
		cout << "Enter Shakes Quantity you want : ";
		cin >> Quant;
		if (QShakes - SShakes >= Quant)
		{
			SShakes = SShakes + QShakes;
			Total_Shakes = Total_Shakes + Quant * 90;
			cout << "\n\n\t\t" << Quant << " These many Shakes have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QShakes - SShakes << " Remaining in Hotel";
		}
		break;

	case 5:
		cout << "Enter Chicken-Roll Quantity you want : ";
		cin >> Quant;
		if (QChicken - SChicken >= Quant)
		{
			SChicken = SChicken + QChicken;
			Total_Chicken = Total_Chicken + Quant * 350;
			cout << "\n\n\t\t" << Quant << " These many Chicken have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QChicken - SChicken << " Remaining in Hotel";
		}
		break;

	case 6:
		cout << "Enter Burger Quantity you want : ";
		cin >> Quant;
		if (QBurger - SBurger >= Quant)
		{
			SBurger = SBurger + QBurger;
			Total_Burger = Total_Burger + Quant * 125;
			cout << "\n\n\t\t" << Quant << " These many Burger have been aloted to you";
		}
		else
		{
			cout << "\n\t Only" << QBurger - SChicken << " Remaining in Hotel";
		}
		break;

	case 7:
		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of rooms we had : " << QRooms;
		cout << "\n\n Number of rooms we give for rent : " << SRooms;
		cout << "\\n Remaining rooms : " << QRooms - SRooms;
		cout << "\\n Total rooms collection for the Day : " << Total_Rooms;

		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of Pasta we had : " << QPasta;
		cout << "\n\n Number of Pasta we give for rent : " << SPasta;
		cout << "\\n Remaining Pasta : " << QPasta - SPasta;
		cout << "\\n Total Pasta collection for the Day : " << Total_Pasta;

		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of Noodles we had : " << QNoodles;
		cout << "\n\n Number of Noodles we give for rent : " << SNoodles;
		cout << "\\n Remaining Noodles : " << QNoodles - SNoodles;
		cout << "\\n Total Noodles collection for the Day : " << Total_Noodles;

		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of Shakes we had : " << QShakes;
		cout << "\n\n Number of Shakes we give for rent : " << SShakes;
		cout << "\\n Remaining Shakes : " << QShakes - SShakes;
		cout << "\\n Total Shakes collection for the Day : " << Total_Shakes;

		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of Chicken-Roll we had : " << QChicken;
		cout << "\n\n Number of Chicken we give for rent : " << SChicken;
		cout << "\\n Remaining Chicken : " << QChicken - SChicken;
		cout << "\\n Total Chicken collection for the Day : " << Total_Chicken;

		cout << "<-----------Details of sales and Collection----------->";
		cout << "\n\n Number of Burger we had : " << QBurger;
		cout << "\n\n Number of Burger we give for rent : " << SBurger;
		cout << "\\n Remaining Burger : " << QBurger - SBurger;
		cout << "\\n Total Burger collection for the Day : " << Total_Burger;

	case 8:
		exit(0);
	default:
		cout << "<------------!! Please Select The Numbers Mentioned Above  !!------------>";

	}

	goto m;
}