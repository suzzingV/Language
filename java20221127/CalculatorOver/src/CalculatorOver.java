public class CalculatorOver {
    double areaRectangle(double width) { //메소드 오버로딩: 메소드 이름은 같고 매개변수 타입, 순서, 개수 중 하나가 다름
        return width * width;
    }

    double areaRectangle(double width, double height) {
        return width * height;
    }
}
//자동형변환 가능하면 오류 아님