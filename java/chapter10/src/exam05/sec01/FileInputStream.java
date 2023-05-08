package exam05.sec01;

public class FileInputStream implements AutoCloseable { //AutoCloseable: close() 메소드 정의되어 있음. try-with-resources는 이걸 자동 호출함
    private String file;

    public FileInputStream(String file) {
        this.file = file;
    }

    public void read() {
        System.out.println(file + "을 읽습니다.");
    }

    @Override
    public void close() throws Exception {
        System.out.println(file + "을 닫습니다.");
    }
}
