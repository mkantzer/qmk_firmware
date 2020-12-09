# default TADA68 layout

This layout replicates the default factory layout of the TADA68.


DECEMBER 9, 2020 Facebook Twitter Google+ Tumblr 
LEAF&CORE
Main menuSkip to content
HOME
REVIEWS
GUIDES
EDITORIALS
RUMORS
APPLE
IPHONE
ABOUT & CONTACT INFORMATION
POSTED ON SEPTEMBER 28, 2018 BY DANIELLE FROM LEAF AND CORE
Customizing the Firmware on your Tada68 Keyboard
Reading Time: 5 minutes.
A keyboard layout
Screenshot of the QMK online configurator

Firmware is a funny thing. It can completely change how your keyboard operates. You might be happy with the setup that comes with your keyboard and never want to change it. However as a Mac user using the Windows-centric Tada68 firmware, I wasn’t. Besides, if you can customize something to make it easier to use, why wouldn’t you?

Unfortunately, the firmware editing process for the Tada68 is, by far, the worst part of this keyboard (but read the full review here). It’s tricky, and, if you’re not familiar with Terminal, some C, homebrew, and firmware files, it’s a little sketchy. In this guide, I’ll walk you through two web based GUIs that can be used to configure your firmware as well as compile it.

In This Article:	
Customizing the Firmware (Tada68’s Stock TMK Firmware)
Loading the Updated Firmware
Setting up QMK
Configuring Your Layout with the QMK Configurator
Flashing Your Keyboard
Why Use QMK Firmware?
Is This for Me?
Customizing the Firmware (Tada68’s Stock TMK Firmware)
Keyboard configurator in chinese

The official method for updating the firmware on this keyboard is not an experience that inspires confidence. First, you need to have Adobe Flash installed. Yes, that Adobe Flash. The insecure junk you likely uninstalled years ago. In fact, you should probably just uninstall it after customizing your firmware.

Next, you need to enter a static IP address and port into your address bar (http://123.57.250.164:3000/tada68). Yup, not even a domain name, just a static IP address. If the Flash wasn’t sketchy enough, this is definitely going to drive some people away. Not only is it an online-only solution, but it requires Flash and a static IP? Well, stick with me, because the official solution gets even crazier.

If you can’t read Chinese text, you’re going to be a little confused at first. There is a drop-down menu on the lower right side. Click it and select English. Now things will look a little better on the page. Well, if you can read English, anyway. If you can’t, I’ve got some very confusing news for you about the words on this page.

From here, it’s pretty easy. Select a key, then, on a full-sized keyboard, select what you want it to be. You can even modify the function key layer with the tab at the top. When you’re done, you can select save project. This will generate a URL that you can enter into your address bar to recover this exact configuration in the future, in case you want to tweak it. You should bookmark this URL.

Next, click “Compiler.” This will build the firmware file (a FLASH.bin file), and prompt you to download it. I found I couldn’t download the file in Firefox, likely due to a security concern, but it works in Safari (thanks, Apple).

Loading the Updated Firmware
Now that you’ve got your .bin file, it’s time to upload it to your Tada68. First, create a folder on your computer to put the original firmware in. In this example, I’ll be placing it in a folder called TADA68_BACKUP, which will be on the Desktop (I did this in Terminal below with the mkdir command). You can put yours wherever you like. You’re going to want to back this up to your existing (and functional) firmware.

Next, on the bottom of the Tada68, press the reset button. Your keyboard will start flashing, and a drive has been mounted on your desktop.

Do not open the drive. I recommend doing the entire part in Terminal from here. If you have opened the drive, or if you attempted this in Finder, start with these three Terminal commands:

cd /Volumes/TADA68\ \

rm -rf .Trashes/

rm -rf .fseventsd/

If you didn’t touch the drive yet, you’ll still need to do this command to go to the directory:

cd /Volumes/TADA68\ \

Next, backup your file:

mkdir ~/Desktop/TADA68_BACKUP/

cp FLASH.bin ~/Desktop/TADA68_BACKUP/

And finally, write the new one

rm FLASH.bin

cp ~/Desktop/FLASH.bin .

(Yes, that’s a space, then a period at the end, copy the whole line.)

Now press the Escape key. Your Mac will complain that the drive was disconnected improperly, but it takes your keyboard out of this mode safely for the keyboard. Do not eject your keyboard. If you eject the drive, you’ll find your keyboard is a brick… until you reconnect it, reset it, and disconnect it by pressing Escape.

Now you’re set! If you know your way around a Unix terminal, this isn’t a big deal. macOS creates a lot of files in your drives for the UI, but because the TADA68 has only enough storage space for its firmware and nothing else, these files can fill up your keyboard, making loading firmware impossible.

If you’re thinking this is crazy, and you don’t want to download Flash or go to a static IP address that might not even exist tomorrow, then there’s some good news. You have other options.

Setting up QMK
The QMK firmware is based on the TMK firmware, so you shouldn’t have any issues using it. There are a couple of ways you could use QMK. You could install all the dependencies and drivers (using Homebrew on macOS), then edit the C file that contains the configuration before building the firmware yourself. It’s tedious, but not overly difficult if you know just enough about C programming and feel a little brave.

I definitely recommend setting up your computer so you could do this if you had no other option. You won’t have to though. Because there’s an online editor that doesn’t use Adobe Flash or a static IP address.

Even if you do know how to code, the non-programming way is much easier, so I’m going to explain that. However, I highly recommend checking out the QMK GitHub page, which will explain everything you need to do to set up your machine to flash your own firmware on your TADA68.

You absolutely don’t have to do this now, but be aware that, because the easy way currently relies on a web app, you might have to some day. It’s highly unlikely though, as everything is open source, so surely someone would take up the helm if the site ever went offline.

Configuring Your Layout with the QMK Configurator
Head over to this webpage. If you’re not setting up a tada68, select whatever keyboard is right for you. Start by clicking “Load Default.” This will set you up with the factory layout for your keyboard. Be sure to thank whatever kind soul uploaded that, because editing this code is a hassle.

Next, use the GUI to drag and drop keys as you wish. It’s great for quickly reorganizing keys. I was able to drag the tilde key below the delete key to quickly swap them. Same for the “Left OS” (Command or Windows) key and the Left Alt.

When you’re done, click Compile. Once it’s done compiling, if you see “File size is fine”, go ahead and click Download Firmware. This will save a bin to your Downloads folder. You’ve got the fresh QMK firmware, now it’s time to flash it to your keyboard.

Flashing Your Keyboard
The instructions are the same as the TMK firmware. Tap the bottom reset button, replace the FLASH.bin file with your new FLASH.bin file in Terminal, and you’re set.

You may also choose to use an app called QMK Toolbox, however, I wasn’t able to get it to work. Interestingly though, after flashing the QMK firmware, the QMK Toolbox app recognized my keyboard as a Tada68 with QMK firmware, but still couldn’t flash it. Still, since it’s easy enough to do with Terminal, you can keep doing it this way. Why let an app do what you can do yourself?

I find it’s best to rely on others as little as possible anyway.

Why Use QMK Firmware?
You’ll be using a firmware that’s under active development, and tools that are supported by a community of enthusiasts. With the TMK firmware, you’re relying on some really sketchy website running sketchy software. Furthermore, the QMK firmware is much easier to generate online, and the web app is a lot nicer.

The only drawback, currently, is that the breathing lighting effect from the TMK firmware isn’t available via the QMK Configurator. Yet. It’s an open source project, someone might add it. The functionality is already in the QMK firmware, and, if you wanted, you could make a custom version yourself. You could even add it to the online configurator. Hell, maybe one day I’ll take a look.

Is This for Me?
You might be wondering if you really want to put yourself through all of this just to swap some keys around. However, I promise it seems far more daunting than it actually is. Once you master the process, you can change and update your firmware in under a minute. In fact, I did just that when I realized I forgot to add a key I wanted to my function layer while writing this post. If you’re nervous, you could always practice on a USB drive before you do the process on your Tada68 (unless you’re using the QMK Toolbox). If you can type a few commands and follow directions, you’ll be fine.

There’s always a danger in flashing your firmware though. If you do something wrong, you could brick your keyboard. Do this at your own risk. It’ll become unusable without a hardware repair. Keep that in mind when doing anything with your keyboard’s firmware. This is the only thing that allows you to interact with your keyboard. If you mess it up, it’ll become nothing more than a cool looking paperweight.

HOW-TO
TAGGED FIRMWARE, GUIDE, HOW-TO, TADA68
Post navigation
← Previous
Next →
PayPal - The safer, easier way to pay online!
Recent Posts
Apple Introduces Ludicrous $549 AirPods Max Over-Ear Headphones
Nimble Disc Case for the iPhone 12 Review
Apple Finally Ditching Supplier Using Forced Labor
Actually, I Turned the Hand Washing Timer Off
Apple Supports, But Seeks to Change Uyghur Forced Labor Bill
Categories
Categories
Select Category
© LEAF&CORE
