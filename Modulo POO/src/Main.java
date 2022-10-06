import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

        int numeroDePass;
        Scanner tec = new Scanner(System.in);

        Password pass = new Password();

        String cond, fuerte;

        int longitud;


        System.out.println("Desea ingresar la longitud de la contraseña? ");
        cond = tec.next();
        if (cond.toLowerCase().equals("si")) {
            System.out.println("Ingrese su longitud y se creara automaticamente su contraseña ");
            longitud = tec.nextInt();
            Password pass2 = new Password(longitud);

            if (pass2.esFuerte(pass2.getPass()) == true) {
                fuerte = "fuerte!";

            } else {
                fuerte = "debil";
            }
            System.out.println("la contraseña Nº:" + " es igual a: " + pass2.getPass() + " " + "es " + fuerte);

        } else {
            Password pass3 = new Password();
            System.out.println("Escriba su contraseña de  8 caracteres:");
            pass3.setPass(tec.next());
            if (pass3.esFuerte(pass3.getPass()) == true) {
                fuerte = "fuerte!";

            } else {
                fuerte = "debil";
            }
            System.out.println("la contraseña Nº:" + " es igual a: " + pass3.getPass() + " " + "es " + fuerte);

        }






    }
}

