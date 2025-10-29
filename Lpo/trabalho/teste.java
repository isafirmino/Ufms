public class teste {
    public static void main(String[] args) {
        System.out.println("🎭 DEMONSTRANDO POLIMORFISMO!\n");
        
        // ✅ Criando um Livro e uma Revista
        Livro livro = new Livro(1, "Java Orientado a Objetos", 2023, "Carlos Silva", 350);
        Revista revista = new Revista(2, "Revista Programação Today", 2024, 15, "Março");
        
        // 🔥 POLIMORFISMO: mesma operação, COMPORTAMENTOS DIFERENTES!
        System.out.println("=== COMPARANDO MULTA POR 10 DIAS DE ATRASO ===");
        System.out.println("Livro: " + livro.getTitulo());
        System.out.println("Multa: R$ " + livro.calcularMulta(10));  // ✅ R$ 20,00
        
        System.out.println("\nRevista: " + revista.getTitulo());
        System.out.println("Multa: R$ " + revista.calcularMulta(10)); // ✅ R$ 5,00
        
        System.out.println("\n⭐ MESMA OPERAÇÃO, RESULTADOS DIFERENTES!");
        
        // 🔥 POLIMORFISMO AVANÇADO: tratando ambos como ItemBiblioteca
        System.out.println("\n=== TRATANDO COMO ItemBiblioteca ===");
        ItemBiblioteca item1 = livro;    // Livro é um ItemBiblioteca
        ItemBiblioteca item2 = revista;  // Revista é um ItemBiblioteca
        
        System.out.println("Item 1: " + item1.getTitulo());
        System.out.println("Multa: R$ " + item1.calcularMulta(5));  // Chama Livro.calcularMulta()
        
        System.out.println("Item 2: " + item2.getTitulo());
        System.out.println("Multa: R$ " + item2.calcularMulta(5));  // Chama Revista.calcularMulta()
        
        System.out.println("\n🎯 Java 'sabe' qual método chamar em tempo de execução!");
    }
}// TestePasso3.java
