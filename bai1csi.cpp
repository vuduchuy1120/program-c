Algorithm : income tax
Purpose : calculate and printf out : income, ti(Taxable Income) and income tax
Pre : give income, pa, pd, n
Post : none
Return : income, ti, income tax
{
	Tf = 12*(pa + n*pd);
	Ti  = income – tf;
	
	Printf("income = %d", income );
	Printf("taxable income = %d", ti);
	
	If(ti <= 0){
		income tax = 0;
		printf("income tax = 0");
	}
	Else{

		If(Ti<=5000000){
			income tax = 5;
            Printf("income tax = 5%, ");
        }
		Else if( ti >= 5000001 && ti <= 10000000){
			income tax = 10;
			Printf("income tax = 10%");
		}
		Else if( ti >= 10000001 && ti <= 18000000){
			income tax = 15;
  			Printf("income tax = 15%");
  		}
		Else if( ti > 18000000){
			income tax = 20;
   			Printf("income tax = 20%");
        }
    }
    
    return income, ti, income tax;
}
