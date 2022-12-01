int _m_atoi(char * in) {
	int ret = 0; 
	for(int r=0; in[r]!='\0'; r++) 
	  ret = ret * 10 + ( in[r] - '0' ); 
	return ret; }
