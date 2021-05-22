#include <fstream.h>
#include <conio.h>
#include <stdio.h>
#include <ctype.h>
struct date
{
	int day,month,year;
};
class Doctor
{
	int DCode;long int DSalary;
	char DName[30],DSpeciality[30];
		public:
	void Input();
	void Output();
	int ReturnDCode();
	int ReturnDSalary();
	char* ReturnDName();
	char* ReturnDSpeciality();
	void Inputavg();
};
void Doctor::Input()
{
	cout<<"Enter Doctor's Name"<<endl;
	gets(DName);
	cout<<"Enter Doctor's Code"<<endl;
	cin>>DCode;
	cout<<"Enter Salary"<<endl;
	cin>>DSalary;
	cout<<"Enter doctor's speciality"<<endl;
	gets(DSpeciality);
}
void Doctor::Output()
{
	cout<<"Name: ";
	puts(DName);
	cout<<"Code: "<<DCode<<endl;
	cout<<"Doctor's Salary: ";
	cout<<DSalary<<endl;
	cout<<"Doctor's Speciality: ";
	puts(DSpeciality);
	cout<<endl;
}
void Doctor::Inputavg()
{
	 cout<<"Enter Doctor's Name"<<endl;
	gets(DName);
	cout<<"Enter Doctor's Code"<<endl;
	cin>>DCode;
	cout<<"Enter Salary"<<endl;
	cin>>DSalary;
	cout<<"Enter doctor's speciality"<<endl;
	gets(DSpeciality);
}
int Doctor::ReturnDCode()
{
	return(DCode);
}
char* Doctor::ReturnDName()
{
	return(DName);
}
int Doctor::ReturnDSalary()
{
	return(DSalary);
}
char* Doctor::ReturnDSpeciality()
{
	return(DSpeciality);
}
/*class Room
{
	int RoomNo;
	char RoomStatus[15];
		public:
	Room();
	void In();
	void Out();
      /*	int ReturnFloorNo();
	int ReturnRoomNo();
	char* ReturnRoomStatus();
};
Room::Room()
{
	RoomNo=0;
	RoomStatus='empty';
}
void Room::In()
{
       /*	cout<<"Enter Floor Number"<<endl;
	cin>>FloorNo;
	cout<<"Enter Room Number"<<endl;
	cin>>RoomNo;
	cout<<"Enter Room Status (Occupied/Empty)"<<endl;
	gets(RoomStatus);
}
void Room::Out()
{
	cout<<"Floor Number: ";
	cout<<FloorNo<<endl;
	cout<<"Room Number: ";
	cout<<RoomNo<<endl;
	cout<<"Room Status: ";
	puts(RoomStatus);
	cout<<endl;
}
int Room::ReturnFloorNo()
{
	return(FloorNo);
}
int Room::ReturnRoomNo()
{
	return(RoomNo);
}
char* Room::ReturnRoomStatus()
{
	return(RoomStatus);
} */
class Patient
{
	int PCode,PRoomNo;date Pdoa;
	char PName[40],PDisease[30],PDoctor[30],PRoomStatus[30];
	public:
	Patient (int m=0){PRoomNo=m;}
	void Input();
	void Output();
	int ReturnPCode();
	int ReturnPRoomNo();
	char* ReturnPName();
	char* ReturnPDisease();
	date ReturnPdoa();
	char* ReturnPDoctor();
	void Inputavg();
};
void Patient::Inputavg()
{
	 cout<<"Enter Patient Name"<<endl;
	gets(PName);
	cout<<"Enter Patient Code"<<endl;
	cin>>PCode;
	cout<<"Enter Date of admit(day,month,year)"<<endl;
	cin>>Pdoa.day>>Pdoa.month>>Pdoa.year;
	cout<<"Enter the name of the patient's doctor"<<endl;
	gets(PDoctor);
	cout<<"Enter the disease that the patient has"<<endl;
	gets(PDisease);
	cout<<"your room no. is"<<PRoomNo<<endl;
}
void Patient::Input()
{
	cout<<"Enter Patient Name"<<endl;
	gets(PName);
	cout<<"Enter Patient Code"<<endl;
	cin>>PCode;
	cout<<"Enter Date of admit(day,month,year)"<<endl;
	cin>>Pdoa.day>>Pdoa.month>>Pdoa.year;
	cout<<"Enter the name of the patient's doctor"<<endl;
	gets(PDoctor);
	cout<<"Enter the disease that the patient has"<<endl;
	gets(PDisease);
	cout<<"your room no. is"<<PRoomNo<<endl;
}
void Patient::Output()
{
	cout<<"Name: ";
	puts(PName);
	cout<<"Code: "<<PCode<<endl;
	cout<<"Admit Date: ";
	cout<<Pdoa.day<<"/"<<Pdoa.month<<"/"<<Pdoa.year<<endl;
	cout<<"Doctor Name: ";
	puts(PDoctor);
	cout<<"Disease: ";
	puts(PDisease);
	cout<<"Room No.: "<<PRoomNo<<endl;
}
int Patient::ReturnPCode()
{
	return(PCode);
}
char* Patient::ReturnPName()
{
	return(PName);
}
char* Patient::ReturnPDisease()
{
	return(PDisease);
}
date Patient::ReturnPdoa()
{
	return(Pdoa);
}
char* Patient::ReturnPDoctor()
{
	return(PDoctor);
}
int Patient::ReturnPRoomNo()
{
	return(PRoomNo);
}
/*char* Patient::ReturnPRoomStatus()
{
	return(PRoomStatus);
}*/
/*int ROOMSTATUS(int no)
{
	fstream fil("patient.dat", ios::in | ios::binary);
	Patient P; int z=0;
	while(fil.read((char*)&P,sizeof(P)) && !z)
	{if(P.ReturnPRoomNo()==no)
		{P.Output(); z++;
		 cout<<"Room Occupied"<<endl;
		}
	}
	if(!z) cout<<"Room Empty"<<endl;
	return (z);
}  */
void WritePatientFile();
void WriteDoctorFile();
void ReadPatientFile();
void ReadDoctorFile();
void DoctorSearch();
void PatientSearch();
void DeletePatientRecord();
void DeleteDoctorRecord();
void EditPatient();
void EditDoctor();
void DischargePatient();
void main()
{
	clrscr();
	int Choice;
	do
	{
	  cout<<"Which Database do you want to open?\n"
	      <<"1. Patient\n"
	      <<"2. Doctor\n"
	      <<"3. Exit\n";
	     cin>>Choice;
	     switch(Choice)
	     {
	       case 1 :
		      int PChoice;
		      do
		      {
		       cout<<"Which feature do you want to use?\n"
		       <<"1. Enter Patient Data\n"<<
		       "2. Display Patient Data\n"<<
		       "3. Search Directory\n"<<
		       "4. Edit Directory\n"<<
		       "5. Delete Record\n"<<
		       "6. Discharge Patient\n"<<
		       "7. Exit\n";
		       cin>>PChoice;
		       switch(PChoice)
		       {
			case 1 :
				WritePatientFile();
				break;
			case 2 :
				ReadPatientFile();
				break;
			case 3 :
				PatientSearch();
				break;
			case 4 :
				EditPatient();
				break;
			case 5 :
				DeletePatientRecord();
				break;
			case 6 :
				DischargePatient();
				break;
			case 7 :
				cout<<"Exiting...";
		       }
		      }while(PChoice!=7);
		      break;
	       case 2 :
		int DChoice;
		do
		{
		 cout<<"Which feature do you want to use?\n"
		 <<"1. Enter Doctor Data\n"<<
		 "2. Display Doctor Data\n"<<
		 "3. Search Directory\n"<<
		 "4. Edit Directory\n"<<
		 "5. Delete Record\n"<<
		 "6. Exit\n";
		 cin>>DChoice;
		 switch(DChoice)
		 {
		  case 1 :
			  WriteDoctorFile();
			  break;
		  case 2 :
			  ReadDoctorFile();
			  break;
		  case 3 :
			  DoctorSearch();
			  break;
		  case 4 :
			  EditDoctor();
			  break;
		  case 5 :
			  DeleteDoctorRecord();
			  break;
		  case 6 :
			  cout<<"Exiting...";
		 }
		}while(DChoice!=6);
		break;
	       case 3 :
		       cout<<"Quiting......";
	     }
	}while(Choice!=3);
	getch();
}
void WritePatientFile()
{
	fstream fil;
	fil.open("Patient.dat",ios::app|ios::in|ios::binary);
	int m=0;fil.seekg(0,ios::end);
	char choice;
	do
	{
			if(fil.tellg()==0)
			   m=1;
			else
			{   Patient P;
			    fil.seekg(fil.tellg()-sizeof(P));
			    fil.read((char*)&P,sizeof(P));
			    m=P.ReturnPRoomNo()+1;
			}
			Patient S(m);
			S.Input();
			fil.write((char*)&S,sizeof(S));
			cout<<"More Data (Y/N)?"<<endl;
			cin>>choice;
	}
	while(toupper(choice)=='Y');
	fil.close();
}
void WriteDoctorFile()
{
	fstream Fil;
	Fil.open("Doctor.dat",ios::app|ios::binary);
	Doctor D;
	char choice;
	do
	{		D.Input();
			Fil.write((char*)&D,sizeof(D));
			cout<<"More Data (Y/N)?"<<endl;
			cin>>choice;
	}
	while(toupper(choice)=='Y');
	Fil.close();
}
/*void WriteRoomFile()
{
	fstream Fil;
	Fil.open("Room.dat",ios::app|ios::binary);
	Room R;
	char choice;
	do
	{		R.In();
			Fil.write((char*)&R,sizeof(R));
			cout<<"More Data (Y/N)?"<<endl;
			cin>>choice;
	}
	while(toupper(choice)=='Y');
	Fil.close();
} */
void ReadPatientFile()
{
	fstream Fil;
	Fil.open("Patient.dat",ios::in|ios::binary);
	Patient P;
	while(Fil.read((char*)&P,sizeof(P)))
		P.Output();
	Fil.close();
}
void ReadDoctorFile()
{
	fstream Fil;
	Fil.open("Doctor.dat",ios::in|ios::binary);
	Doctor D;
	while(Fil.read((char*)&D,sizeof(D)))
		D.Output();
	Fil.close();
}
/*void ReadRoomFile()
{
	fstream Fil;
	Fil.open("Room.dat",ios::in|ios::binary);
	Room R;
	while(Fil.read((char*)&R,sizeof(R)))
		R.Out();
	Fil.close();
} */
void DoctorSearch()
{
	fstream fil;
	fil.open("Doctor.dat",ios::in|ios::binary);
	int dcode,found=0;
	cout<<"enter the Doctorcode you are looking for:";
	cin>>dcode;
	Doctor D;
	while(fil.read((char*)&D,sizeof(D))&&!found)
	{if(D.ReturnDCode()==dcode)
		{found++;
		 D.Output();
		}
	}
 fil.close();
}
void PatientSearch()
{
	fstream fil1;
	fil1.open("Patient.dat",ios::in|ios::binary);
	int pcode,found=0;
	cout<<"enter the Patientcode you are looking for:";
	cin>>pcode;
	Patient P;
	while(fil1.read((char*)&P,sizeof(P))&&!found)
	{if(P.ReturnPCode()==pcode)
		{found++;
		 P.Output();
		}
	}
 fil1.close();
}
void DeleteDoctorRecord()
{
	fstream fil1;
	fstream fil2;
	fil1.open("Doctor.dat",ios::binary|ios::in);
	fil2.open("Temp.dat",ios::out|ios::binary);
	Doctor D;
	int dcode;
	cout<<"enter the doctor code to be deleted"<<endl;
	cin>>dcode;
	int del=0;
	while(fil1.read((char*)&D,sizeof(D)))
		{if(D.ReturnDCode()!=dcode)
				fil2.write((char*)&D,sizeof(D));
		 else
				del++;
		}
		fil1.close();
		fil2.close();
	if(del==0)
	{	cout<<"Record not found"<<endl;
		remove("Temp.dat");
	}
	else
	{	remove("Doctor.dat");
		rename("Temp.dat","Doctor.dat");
	}
}
void DeletePatientRecord()
{
	fstream fil1;
	fstream fil2;
	fil1.open("Patient.dat",ios::binary|ios::in);
	fil2.open("Temp.dat",ios::out|ios::binary);
	Patient P;
	int pcode;
	cout<<"enter the patient code to be deleted"<<endl;
	cin>>pcode;
	int del=0;
	while(fil1.read((char*)&P,sizeof(P)))
		{if(P.ReturnPCode()!=pcode)
				fil2.write((char*)&P,sizeof(P));
		 else
				del++;
		}
		fil1.close();
		fil2.close();
	if(del==0)
	{	cout<<"Record not found"<<endl;
		remove("Temp.dat");
	}
	else
	{	remove("Patient.dat");
		rename("Temp.dat","Patient.dat");
	}
}
void EditPatient()
{
	fstream fil;
	fil.open("Patient.dat",ios::binary|ios::in|ios::out);
	Patient P;
	int pcode;
	cout<<"enter the Patient code to be editted"<<endl;
	cin>>pcode;
	int found=0;
	while(fil.read((char*)&P,sizeof(P))&&!found)
	{	if(P.ReturnPCode()==pcode)
		{	P.Inputavg();
			fil.seekg(fil.tellg()-sizeof(P));
			fil.write((char*)&P,sizeof(P));
			found++;
		}
	}
	if(!found)
		cout<<"Record not found";
	fil.close();
}
void EditDoctor()
{
	fstream fil;
	fil.open("Doctor.dat",ios::binary|ios::in|ios::out);
	Doctor D;
	int dcode;
	cout<<"enter the Doctor code to be editted"<<endl;
	cin>>dcode;
	int found=0;
	while(fil.read((char*)&D,sizeof(D))&&!found)
	{	if(D.ReturnDCode()==dcode)
		{	D.Inputavg();
			fil.seekg(fil.tellg()-sizeof(D));
			fil.write((char*)&D,sizeof(D));
			found++;
		}
	}
	if(!found)
		cout<<"Record not found";
	fil.close();
}
void DischargePatient()
{
		fstream fil1,fil2;
	fil1.open("Patient.dat",ios::in|ios::binary);
	fil2.open("Temp.dat",ios::out|ios::binary);
	int pcode;
	cout<<"enter the Patientcode you are looking for:";
	cin>>pcode;
	Patient P;
	int del=0;
	while(fil1.read((char*)&P,sizeof(P)))
		{if(P.ReturnPCode()!=pcode)
				fil2.write((char*)&P,sizeof(P));
		 else
		    {		del++;
				P.Output();
		    }
		}
		fil1.close();
		fil2.close();
	if(del==0)
	{	cout<<"Record not found"<<endl;
		remove("Temp.dat");
	}
	else
	{	remove("Patient.dat");
		rename("Temp.dat","Patient.dat");
	}
	date Pdod;
	cout<<"Enter Date of Discharge(day,month,year)"<<endl;
	cin>>Pdod.day>>Pdod.month>>Pdod.year;
	int days;
	cout<<"enter the no. days stayed:"<<endl;
	cin>>days;
	int fee=days*100;
	cout<<"the fee is:$"<<fee<<endl;
}






