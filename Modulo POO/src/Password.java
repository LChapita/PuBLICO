import java.security.SecureRandom;

public class Password {
    private int longitud;
    private String pass;
    private final int LONG_DEFUAULT=8;
    private char [] abecedarioMayusculas = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
            'K', 'L', 'M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z'};
    private char [] abecedarioMinusculas ={'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
            'k', 'l', 'm','n','o','p','q','r','s','t','u','v','w', 'x','y','z'};
    private char[] numeros={'0','1','2','3','4','5','6','7','8','9'};
    public Password() {
        this.longitud = LONG_DEFUAULT;
        this.pass = pass;
    }

    public Password(int longitud) {
        this.longitud = longitud;
        this.pass = generateRandomPassword(longitud);
    }

    public int getLongitud() {
        return longitud;
    }

    public void setLongitud(int longitud) {
        this.longitud = longitud;
    }

    public String getPass() {
        return pass;
    }

    public void setPass(String pass) {
        this.pass = pass;
    }


    public boolean esFuerte(String pass){
        char comparar;
        boolean encontrado=false;
        boolean cond=false;
        int contNumeros=0;
        int contMayus=0;
        int contMinus=0;
        int k=0;
        for(int i=0; i<this.longitud ;i++){
            comparar= this.pass.charAt(i);
            k=0;
            encontrado=false;
            while(!(k==(26-1)) && !(comparar==(abecedarioMayusculas[k]))){
                k++;
            }
            if(comparar==(abecedarioMayusculas[k])){
                contMayus++;
                encontrado=true;
            }

            k=0;
            while(encontrado==false && !(k==(26-1)) && !(comparar==(abecedarioMinusculas[k]))){
                k++;
            }
            if(comparar==(abecedarioMinusculas[k])){
                contMinus++;
                encontrado=true;
            }
            k=0;
            while(encontrado==false && !(k==(10-1)) && !(comparar==(numeros[k]))){
                k++;
            }
            if(comparar==(numeros[k])){
                contNumeros++;
            }
        }
        if(contMinus>1 && contMayus>2 && contNumeros>5){
            cond=true;
        }

        return cond;
    }



    public static String generateRandomPassword(int longitud)
    {
        // Rango ASCII – alfanumérico (0-9, a-z, A-Z)
        final String chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

        SecureRandom random = new SecureRandom();
        StringBuilder sb = new StringBuilder();

        // cada iteración del bucle elige aleatoriamente un carácter del dado
        // rango ASCII y lo agrega a la instancia `StringBuilder`

        for (int i = 0; i < longitud; i++)
        {
            int randomIndex = random.nextInt(chars.length());
            sb.append(chars.charAt(randomIndex));
        }

        return sb.toString();
    }
}
