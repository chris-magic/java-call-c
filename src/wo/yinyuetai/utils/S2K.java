package wo.yinyuetai.utils;

public class S2K {

	static {
		System.loadLibrary("s2k_chris");
	}

	/*native function*/
	//encrypt_s is input string
	private native static String s2k(String encrypt_s );
	
	//interface for other people include the function s2k
	public static  String s_2_k(String encrypt_s){
		
		return s2k(encrypt_s);
//		return null;
	}
}

