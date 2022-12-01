void _m_itoa(int in_val, char * in_str) {
	int str_ptr=0;
	while(in_val>0) {
		int x=in_val%10; char next_char='0';
		next_char=next_char+x;
		in_str[str_ptr] = next_char; 
		str_ptr++;
		in_val /= 10.0;	 }
	in_str[str_ptr]= '\0'; }
