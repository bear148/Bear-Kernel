<h1>Bear OS</h1>
<h3>Michael's Basic Kernel</h3>
<p>Very basic code writen from assembly, and C.</p>

<h2>Requirements</h2>
<p>To use this you'll need QEMU, an emulation software, and Docker.</p>

<h2>Using the OS</h2>
<ul>
    <li>Run "docker build buildenv -t bearos-buildenv"</li>
    <li>Next, run "docker run --rm -it -v "%cd%":/root/env bearos-buildenv" in side of Command Prompt. It HAS to be command prompt. You must also be inside of the main kernel directory. Which sould be "Bear-Kernel"</li>
    <li>Inside of the virtual terminal run, 'make build-x86_64</li>
    <li>While still inside of the virtual terminal, run 'Exit'</li>
    <li>Finally, you can run the command "qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso" to run the .iso file and a screen should popup with some text.</li>
</ul>

<p>There you go! You're now running BearOS in a virtual machine.</p>