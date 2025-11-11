package inheritance;

public class Device {
	    String brand;
	    double price;

	    //  Default Constructor
	    Device() {
	        System.out.println("Device default constructor");
	        brand = "Unknown";
	        price = 0.0;
	    }

	    //  Parameterized Constructor
	    Device(String brand, double price) {
	        System.out.println("Device parameterized constructor");
	        this.brand = brand;
	        this.price = price;
	    }

	    public String getBrand() {
			return brand;
		}

		public void setBrand(String brand) {
			this.brand = brand;
		}

		public double getPrice() {
			return price;
		}

		public void setPrice(double price) {
			this.price = price;
		}

		void display() {
	        System.out.println("Brand: " + brand + ", Price: ₹" + price);
	    }
	}

	// Subclass 1
	class Laptop extends Device {
	    int ram;

	    // 🔹 Default Constructor
	    Laptop() {
	        super(); // calls Device default constructor
	        System.out.println("Laptop default constructor");
	        ram = 8;
	    }

	    // 🔹 Parameterized Constructor
	    Laptop(String brand, double price, int ram) {
	        super(brand, price); // calls Device parameterized constructor
	        System.out.println("Laptop parameterized constructor");
	        this.ram = ram;
	    }

	    public int getRam() {
			return ram;
		}

		public void setRam(int ram) {
			this.ram = ram;
		}

		void display() {
	        super.display();
	        System.out.println("RAM: " + ram + "GB");
	    }
	}

	// Subclass 2
	class Mobile extends Device {
	    int cameraMP;

	    // 🔹 Default Constructor
	    Mobile() {
	        super(); // calls Device default constructor
	        System.out.println("Mobile default constructor");
	        cameraMP = 12;
	    }

	    // 🔹 Parameterized Constructor
	    Mobile(String brand, double price, int cameraMP) {
	        super(brand, price); // calls Device parameterized constructor
	        System.out.println("Mobile parameterized constructor");
	        this.cameraMP = cameraMP;
	    }

	    public int getCameraMP() {
			return cameraMP;
		}

		public void setCameraMP(int cameraMP) {
			this.cameraMP = cameraMP;
		}

		void display() {
	        super.display();
	        System.out.println("Camera: " + cameraMP + "MP");
	    }
	}

	// Subclass 3
	class Tablet extends Device {
	    double screenSize;

	    // 🔹 Default Constructor
	    Tablet() {
	        super(); // calls Device default constructor
	        System.out.println("Tablet default constructor");
	        screenSize = 10.0;
	    }

	    // 🔹 Parameterized Constructor
	    Tablet(String brand, double price, double screenSize) {
	        super(brand, price); // calls Device parameterized constructor
	        System.out.println("Tablet parameterized constructor");
	        this.screenSize = screenSize;
	    }

	    public double getScreenSize() {
			return screenSize;
		}

		public void setScreenSize(double screenSize) {
			this.screenSize = screenSize;
		}

		void display() {
	        super.display();
	        System.out.println("Screen Size: " + screenSize + " inches");
	    }
	}

	// Demo Class
	class DemoDevice {
	    public static void main(String[] args) {
	        System.out.println("--- Using Parameterized Constructors ---");
	        Laptop l = new Laptop("Dell", 70000, 16);
	        Mobile m = new Mobile("Samsung", 30000, 108);
	        Tablet t = new Tablet("Apple", 80000, 11);

	        System.out.println("\n--- LAPTOP ---");
	        l.display();

	        System.out.println("\n--- MOBILE ---");
	        m.display();

	        System.out.println("\n--- TABLET ---");
	        t.display();

	        System.out.println("\n--- Using Default Constructors ---");
	        Laptop l2 = new Laptop();
	        Mobile m2 = new Mobile();
	        Tablet t2 = new Tablet();

	        System.out.println("\n--- LAPTOP (Default) ---");
	        l2.display();

	        System.out.println("\n--- MOBILE (Default) ---");
	        m2.display();

	        System.out.println("\n--- TABLET (Default) ---");
	        t2.display();
	    }
	}


