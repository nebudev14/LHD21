public class Encryption {

    // Encrypts by taking the ASCII value of each character and multiplies by 3
    public static String Encrypt(String s) {
        String ret = "";
        for(int i = 0; i < s.length(); ++i)
        {
            ret+= Integer.toString((int) s.charAt(i)*3);
            ret+= " ";
        }
        return ret;
    }

    public static String Decrypt(String s) {
        String ret = "";
        for(String c : s.split(" ")) {
            int num = Integer.parseInt(c)/3;
            ret += (char) num;
        }
        return ret;
    }

    public static void main(String[] args) {
        System.out.println(Encrypt("hello"));
        System.out.println(Decrypt(Encrypt("hello")));
    }
}