public class Earth {
    static final double EARTH_RADIUS = 6400; //상수이름은 대문자, 여러단어면 언더바로
    static final double EARTH_SURFACE_AREA;

    static {
        EARTH_SURFACE_AREA = 4 * Math.PI * EARTH_RADIUS * EARTH_RADIUS; //정적 블록에서도 초기화 가능
    }
}
