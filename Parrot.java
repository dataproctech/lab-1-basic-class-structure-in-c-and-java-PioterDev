import java.util.ArrayList;

public class Parrot {
    private ArrayList<String> phrases = new ArrayList<>();
    // private String phrase;

    public Parrot(String phrase) {
        // this.phrase = phrase;
        this.phrases.add(phrase);
    }
    
    public Parrot(ArrayList<String> phrases) {
        this.phrases.addAll(phrases);
    }

    public void say(int howManyTimes) {
        int index = (int)(Math.random() * this.phrases.size());
        for(int i = 0; i < howManyTimes; i++) {
            // System.out.println(phrase);
            System.out.println(phrases.get(index));
            
        }
    }

    /* public void setPhrase(String new_phrase) {
        this.phrase = new_phrase;
    } */

    public void addPhrase(String phrase) {
        this.phrases.add(phrase);
    }

    public void addPhrases(ArrayList<String> phrases) {
        this.phrases.addAll(phrases);
    }

    public static void main(String[] args) {
        Parrot p = new Parrot("Wow, green");
        p.addPhrase("Bruh");
        p.addPhrase("Not");
        p.addPhrase("Bread");

        for(int i = 0; i < 8; i++) {
            p.say(1);
        }
    }
}