import java.util.*;

public class q12
{
    public static void main(String[] args)
    {
        int empId;
        String empName;
        float salary;
        String department;

        Scanner s = new Scanner(System.in);

        System.out.print("Enter Employee ID: ");
        empId = s.nextInt();

        System.out.print("Enter Employee Name: ");
        empName = s.next();

        System.out.print("Enter Salary: ");
        salary = s.nextFloat();

        System.out.print("Enter Department: ");
        department = s.next();

        System.out.println("\n--- Employee Details ---");
        System.out.println("Employee ID: " + empId);
        System.out.println("Employee Name: " + empName);
        System.out.println("Salary: " + salary);
        System.out.println("Department: " + department);
    }
}
