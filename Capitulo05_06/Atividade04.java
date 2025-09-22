import java.util.ArrayList;

class Livro {
    String titulo;
    String autor;
    int anoPublicacao;

    Livro(String titulo, String autor, int ano) {
        this.titulo = titulo;
        this.autor = autor;
        this.anoPublicacao = ano;
    }
}

public class Atividade04 {
    public static void main(String[] args) {
        ArrayList<Livro> livros = new ArrayList<>();

        livros.add(new Livro("Dom Casmurro", "Machado de Assis", 1899));
        livros.add(new Livro("O Alquimista", "Paulo Coelho", 1988));
        livros.add(new Livro("1984", "George Orwell", 1949));

        System.out.println("Títulos dos livros:");
        for(Livro l : livros) {
            System.out.println(l.titulo);
        }
    }
}
