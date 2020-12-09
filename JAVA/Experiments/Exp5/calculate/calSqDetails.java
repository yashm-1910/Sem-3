package calculate;

import geometry.squareArea;
import figures.squarePerimeter;

public class calSqDetails {
    public static void main(String[] args)
	{
		figures.squarePerimeter p = new figures.squarePerimeter();
		geometry.squareArea a1 = new geometry.squareArea();
		a1.side=5;
		a1.calc();
		p.side=5;
		p.calc();
	}
}
