int gcd(int a, int b){
	int del = 0;
	if(a == b){
		return a;
	}
	else if(a < b){
		if(0 == (b % a)){
			return a;
		}
		else{
			del = a;
			for(; 0 < del; del--){
				if(0 == (a%del) && 0 == (b%del)){
					return del;
					break;
				}
			}
		}
	}
	else{
		if(0 == (a % b)){
			return b;
		}
		else{
			int del = b;
			for(; 0 < del; del--){
				if(0 == (b%del) && 0 == (a%del)){
					return del;
					break;
				}
			}
		}
	}
	if(0 == del){
		return 1;
	}
	return 0;
}
