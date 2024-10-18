import Image from "next/image";
import Clock from "./(components)/Clock";
import ClockTitle from "./(components)/ClockTitle";
import Footer from "./(components)/Footer";

export default function Home() {
  return (
    <div className="min-h-screen p-8 pb-20 bg-background">
      <ClockTitle />
      <Clock />
      <Footer />
    </div>
  );
}
