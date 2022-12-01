void _m_ftoa(float in_val, char * in_str) {
	int str_ptr=0;
	int in_val_int=(int)in_val;
	while(in_val_int>0) {
		int x=in_val_int%10; char next_char='0';
		next_char=next_char+x;
		in_str[str_ptr] = next_char; str_ptr++;
	in_val_int /= 10.0;	 }
	in_str[str_ptr] = '.'; str_ptr++;
	float in_val_dec = in_val-(int)in_val;
	while(in_val_dec>0) {
		in_str[str_ptr++]= (int)(in_val_dec*10) + '0';
		in_val_dec *= 10;
		in_val_dec = in_val_dec-(int)in_val_dec; }
in_str[str_ptr]= '\0'; }
