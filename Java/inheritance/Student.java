package inheritance;

		class Student {
		    int id;
		    String name;
		    int distance;
		    static int count = 0;

		    Student()//default constructor
		    {
		        System.out.println("student default constructor");
		        id = 12;
		        name = "abc";
		        distance = 45;
		        count++;
		    }

		    Student(int id, String name, int distance)//parameterized  constructor
		    {
		        System.out.println("student parameterized constructor");
		        this.id = id;
		        this.name = name;
		        this.distance = distance;
		        count++;
		    }

		    void display() {
		        System.out.println("student id      : " + this.id);
		        System.out.println("student name    : " + this.name);
		        System.out.println("distance is     : " + this.distance);
		    }

		    public int getId() {
				return id;
			}

			public void setId(int id) {
				this.id = id;
			}

			public String getName() {
				return name;
			}

			public void setName(String name) {
				this.name = name;
			}

			public int getDistance() {
				return distance;
			}

			public void setDistance(int distance) {
				this.distance = distance;
			}

			static int getCount() {
		        return count;
		    }
		}//student class ends here

		class PlacedStudent extends Student {
		    String cname;
		    String designation;

		    PlacedStudent()//default constructor
		    {
		        super();
		        System.out.println("placed student default constructor");
		        cname = "tcs";
		        designation = "pune";
		    }

		    PlacedStudent(int id, String name, int distance, String cname, String designation) //parameterized constructor
		    {
		        super(id, name, distance);
		        System.out.println("placed student parameterized constructor");
		        this.cname = cname;
		        this.designation = designation;
		    }

		    public String getCname() {
				return cname;
			}

			public void setCname(String cname) {
				this.cname = cname;
			}

			public String getDesignation() {
				return designation;
			}

			public void setDesignation(String designation) {
				this.designation = designation;
			}

			void display() {
		        super.display();
		        System.out.println("company name is : " + this.cname);
		        System.out.println("designation is  : " + this.designation);
		    }
		}//placedstudent class end here

		 class Demostudent {
		    public static void main(String[] args) {
		        //Student s1 = new Student();
		       // System.out.println("Student count: " + Student.getCount());
		        //System.out.println();

		        //Student s2 = new Student(1, "xyz", 56);
		        //s2.display();
		        //System.out.println("Student count: " + Student.getCount());
		        //System.out.println();
		    	PlacedStudent p2 = new PlacedStudent();
		    	System.out.println(p2.getName());
		    	System.out.println("\n");
		        PlacedStudent p1 = new PlacedStudent(2, "efg", 45, "TCS", "Pune");
		        p1.display();
		        //System.out.println("Student count: " + Student.getCount());
		        System.out.println(p1.getName());
		    }//main class end here

	}//demostudent class ends here


