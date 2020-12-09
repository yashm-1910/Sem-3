/**
 * Write a class PoliceCar that implements the IsEmergency and IsLandVehicle
interfaces. In addition to the methods you have written for the PoliceCar class,
think of a new method or property that police cars have and add it to the class.
 */

 //defining Interface isEmergency
interface IsEmergency{
    void Emergency();
}
//defining Interface isLandVehicle
interface IsLandVehicle{
    void LandVehicle();
}

//class policeCar inherits interfaces isEmergency and isLandVehicle
class PoliceCar implements IsEmergency, IsLandVehicle{

    private int no_seates;
    private String type;

    public int getNo_seates() {
        return no_seates;
    }

    public void setNo_seates(int no_seates) {
        this.no_seates = no_seates;
    }

    public String getType() {
        return type;
    }

    public void setType(String type) {
        this.type = type;
    }

    //implementing inherited abstract methods
    public void Emergency(){
        System.out.println("Emergency");
    }
    public void LandVehicle(){
        System.out.println("Car is a land vehicle");
    }
    
}

//Driver class
public class Question {
    public static void main(String[] args) {

        //Object of class PoliceCar
        PoliceCar pCar = new PoliceCar();
        pCar.setNo_seates(6);
        pCar.setType("SUV");
        System.out.println("The Police car has " + pCar.getNo_seates() + " seates.");
        System.out.println("The Police car is a " + pCar.getType());
        pCar.LandVehicle();
        pCar.Emergency();
    }
}
