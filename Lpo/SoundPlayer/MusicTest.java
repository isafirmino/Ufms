import javax.sound.midi.*;
import static javax.sound.midi.ShortMessage.*;

public class MusicTest{
    public static void play(){
        try{
            //criação sequenciador
            Sequencer sequencer = MidiSystem.getSequencer();
            sequencer.open();

            //criacao de uma sequence
            Sequence seq = new Sequence(Sequence.PPQ, 4);
            Track track = seq.createTrack();

            ShortMessage msgl = new ShortMessage();
            msgl.setMessage(NOTE_ON, 1, 44, 100);
            MidiEvent noteOn = new MidiEvent(msgl, 1);
            track.add(noteOn);

            ShortMessage msg2 = new ShortMessage();
            msg2.setMessage(NOTE_OFF, 1, 44, 100);
            MidiEvent noteOff = new MidiEvent(msg2, 16);
            track.add(noteOff);
            sequencer.setSequence(seq);
            sequencer.start();

        } catch (MidiUnavailableException | InvalidMidiDataException e){
            System.out.println("Erro");
            e.printStackTrace();
        }
    }

    public static void main(String[] args) {
        play();
    }
}